 
/**
* @param s      run-length along spiral
* @param gamma   first derivative of curvature [1/m2]
* @param x      resulting x-coordinate in spirals local co-ordinate system [m]
* @param y      resulting y-coordinate in spirals local co-ordinate system [m]
* @param t      tangent direction at s [rad]
*/

extern void spiral( double s, double curv_start, double hdg, double gamma, double x_start, double y_start,
                            double *x_out, double *y_out, double *t_out);
