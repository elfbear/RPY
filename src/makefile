C = icc -g
FORTRAN = ifort
CFLAGS = $(PROFILE) #-O3
FFLAGS = $(PROFILE) # -O3
LFLAGS = $(PROFILE)

COMMON = ./common
OBJDIR = ./build
LAPDIR = ./laplace
RPYDIR = ./rpy
#HYDRO  = ./hydro

COMC = $(wildcard $(COMMON)/*.c)
LAPC = $(wildcard $(LAPDIR)/*.c)
RPYC = $(wildcard $(RPYDIR)/*.c)
#HYDI = $(wildcard $(HYDRO)/*.c)

COMOBJ = $(patsubst $(COMMON)/%.c, $(OBJDIR)/%.o, $(COMC))
LAPCOBJ = $(patsubst $(LAPDIR)/%.c, $(OBJDIR)/%.o, $(LAPC))
RPYOBJ = $(patsubst $(RPYDIR)/%.c, $(OBJDIR)/%.o, $(RPYC))
# HYDROBJ = $(patsubst $(HYDRO)/%.c, $(OBJDIR)/%.o, $(HYDI))

LIB_LAP = ./build/libhydro_fmm.a

lib_lap: $(COMOBJ) $(LAPCOBJ) $(RPYOBJ) 
	ar -cvq $(LIB_LAP) $(COMOBJ) $(RPYOBJ) $(LAPCOBJ) 

$(OBJDIR)/%.o: $(COMMON)/%.c
	$(C) $(CFLAGS) -c -I./include -o $@ $<

$(OBJDIR)/%.o: $(LAPDIR)/%.c
	$(C) $(CFLAGS) -c -I./include -o $@ $<

$(OBJDIR)/%.o: $(RPYDIR)/%.c
	$(C) $(CFLAGS) -c -I./include -o $@ $<

clean:
	rm -f $(OBJDIR)/*.o
	#rm -f $(LIB_LAP) $(LIB_YUK)
	rm -f $(LIB_LAP)
#rm -f *~ $(LAPDIR)/*~ $(YUKDIR)/*~ $(COMMON)/*~ $(HYDRO)/*~
	rm -f *~ $(LAPDIR)/*~ $(COMMON)/*~ #$(HYDRO)/*~
	rm -f ./include/*~


