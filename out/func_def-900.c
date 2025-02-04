#include <math.h>

# 1 
void mass_forcing(double constants[4],
                  double coordinates[1],
                  double speeds[1],
                  double specified[1],
                  double mass_matrix[4],
                  double forcing_vector[2])
{

    double z_0 = speeds[0];


    mass_matrix[0] = 1;
    mass_matrix[1] = 0;
    mass_matrix[2] = 0;
    mass_matrix[3] = constants[0];


    forcing_vector[0] = z_0;
    forcing_vector[1] = -constants[2]*z_0 + constants[3]*constants[0] - constants[1]*coordinates[0] + specified[0];
}