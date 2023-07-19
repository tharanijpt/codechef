int T,rtp,audit,non_rtp;
	cin >> T;
while(T--){
    
    cin >> rtp>>audit>>non_rtp;
    cout << rtp*4 + audit*2 + non_rtp*0 << endl;
}
	return 0;
}