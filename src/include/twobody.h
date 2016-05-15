// Shell representation
int  fcc_array(int nc, double bradius, double spacing, double *sphs);
int shell_model(const int nc, const double bradius, const double spacing, const double *ShellRadius, double *ShellSphs);

int RPY(int nparts, double *ploc, double *pcharge, double *RPY );

int TandQ(double *T, double *Q,double *ShellSphs,int N);
//int Qmatrix(double *Q,double *ShellSphs, int N);
void LCepsilon(double *lc_eps);
double sph_norm(double *v, double radius );
int  rotmat(double *r, double *M, double *lc_eps);
int KrylovFMM(double *solution, double *ShellSphs, double *rhs, int  n);
