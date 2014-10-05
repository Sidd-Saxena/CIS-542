int is_prime(int n)
{
 int k, limit;
 //check if the number is 2 as 2 is prime returning 1
 if (n==2)
 {
 	return (1);
 }
 //check if the number is a multiple of 2 and return 0 as they won't be prime
 if (n % 2 == 0)
 {
 	return (0);
 }

 limit = n/2;
//check if the number is multiple of other odd numbers if yes return 0 
 for( k = 3; k <= limit; k+=2 )
 {
 	if ( n % k == 0)
 	{
 		 return (0);
 	}
}
//as they are not multiple of any number it means they are prime hence return 1
return (1);
}