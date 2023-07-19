int T,chef,chefina;
	cin >> T;
while(T--){
    cin >> chef >>  chefina;
if (chef>chefina)
    cout << chef - chefina << endl;
else if (chefina > chef)
  cout << chefina - chef<< endl;
else 
    cout <<"0" << endl;
}
	return 0;
}