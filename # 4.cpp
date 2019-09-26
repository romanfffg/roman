# include  < iostream >
# include  < cstdlib >
# include  < string >

использование  пространства имен  std ;

void  zagl (string & s)
{
	для ( int p = 0 ; p <s. length (); p ++)
	{
		если (s [p] == ' A ' )
			s [p] = ' a ' ;
		если (s [p] == ' E ' )
			s [p] = ' e ' ;
		если (s [p] == ' Y ' )
			s [p] = ' y ' ;
		если (s [p] == ' U ' )
			s [p] = ' u ' ;
		если (s [p] == ' I ' )
			s [p] = ' i ' ;
		если (s [p] == ' O ' )
			s [p] = ' o ' ;
	}

}
int  main ()
{
	строка а;
	getline (cin, a);
	загл (а);
	cout << a << endl;
	вернуть  0 ;
}
