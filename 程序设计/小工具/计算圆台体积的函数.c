double volume_tc(double r_lower, double r_upper, double h) {
	double V;
	V = PI * (r_lower * r_lower + r_upper * r_lower + r_upper * r_upper ) * h / 3.0;
	return V;
}
