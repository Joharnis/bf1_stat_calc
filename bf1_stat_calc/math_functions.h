﻿#ifndef math_functions_h_
#define math_functions_h_
// hrec horizontal offset function
double hrec(double distance, double hrec_magnitude);

//function to calculate the distance between 2 points in cartesian coordinate system
double dist_betw_points(double x_1, double y_1, double x_2, double y_2);

//function to generate a random number with equal distribution
double random_number(double rand_num_min, double rand_num_max);

#endif //math_functions_h_