// Z - целое число которое нужно вычслить по модулю
// N - ерзультат вычисления, натуральное число

int ABS_Z_N(int Z)
{
	unsigned int N;
	if (Z<0)
	{
		N=(-1)*Z;
		return N;
	}
	else
		return N=Z;		
}
