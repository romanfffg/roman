  
# include  < iostream >
# include  < string >
# include  < cstdio >
использование  пространства имен  std ;

int * func (string str) {
	int mas [ 6 ];
	для ( int i = 0 ; i < 6 ; i ++) {
		mas [i] = 0 ;
	}
	for ( int i = 0 ; i <str. length (); i ++) {
		if (str [i] == ' a ' ) {
			mas [ 0 ] ++;
		}
		еще  если (str [i] == ' o ' ) {
			mas [ 1 ] ++;
		}
		if (str [i] == ' e ' ) {
			mas [ 2 ] ++;
		}
		иначе  если (str [i] == ' i ' ) {
			mas [ 3 ] ++;
		}
		if (str [i] == ' u ' ) {
			mas [ 4 ] ++;
		}
		еще  если (str [i] == ' y ' ) {
			mas [ 5 ] ++;
		}
	}
	возврат мас;
}

int  main () {
	значение bool = true ;
	символ символа [] = { ' a ' , ' u ' , ' e ' , ' o ' , ' y ' , ' i ' };
	int test_1 [ 6 ], test_2 [ 6 ], test_3 [ 6 ];
	int a [] = { 4 , 4 , 0 , 0 , 0 , 0 };
	int b [] = { 0 , 0 , 0 , 0 , 0 , 0 };
	int c [] = { 1 , 2 , 3 , 1 , 5 , 8 };
	for ( int i = 0 ; i <( sizeof (символ) / sizeof (символ [ 0 ])); i ++) {
		test_1 [I] = * ( FUNC ( " ет ет ет " ) + I);
		test_2 [i] = * ( func ( " " ) + i);
		test_3 [i] = * ( func ( " aeoi yio intru io e " ) + i);
	}
	for ( int i = 0 ; i <( sizeof (символ) / sizeof (символ [ 0 ])); i ++) {
		if (test_1 [i]! = a [i] || test_2 [i]! = b [i] || test_3 [i]! = c [i]) {
			значение = ложь ;
		}
	}
	if (значение) {
		cout << " проблема " << endl;
		возврат  1 ;
	}
	еще {
		cout << " это работает " << endl;
	}
	вернуть  0 ;
} 
