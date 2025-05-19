#ifndef LAMBERTW_H
#define LAMBERTW_H

namespace LambertW {

// Compute principal branch of the lambert-w function
extern double lambert_w0(double x);

// Compute secondary negative branch of the lambert-w function
extern double lambert_wm1(double x);

} // namespace LambertW

#endif
