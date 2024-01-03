// * * *
// * * *
// * * *

void nForest(int n) {
	// Write your code here.
	for(int i =0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"* ";
		}cout<<endl;
	}
}

// * 
// * *
// * * *

void nForest(int n) {
	// Write your code here.
	for(int i =0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<"* ";
		}cout<<endl;
	}
}

// 1
// 1 2 
// 1 2 3

void nTriangle(int n) {
	// Write your code here
	for(int i =1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<j<<" ";
		}cout<<endl;
	}
}

// 1
// 2 2 
// 3 3 3

void triangle(int n) {
	// Write your code here
	for(int i = 1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<i<<" ";
		}cout<<endl;
	}
}

// * * *
// * *
// *

void seeding(int n) {
	// Write your code here.
	for(int i = n; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}cout<<endl;
	}
}

// 1 2 3
// 1 2
// 1

void nNumberTriangle(int n) {
    // Write your code here.
    for(int i = n; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<j<<" ";
		}cout<<endl;
	}
}

//   *
//  ***
// *****

void nStarTriangle(int n) {
    // Write your code here.
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
		for(int j=1; j<=2*i-1; j++){
			cout<<"*";
		}cout<<endl;
	}
}


// *****
//  ***
//   *

void nStarTriangle(int n) {
    // Write your code here.
    for(int i = n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
		for(int j=1; j<=2*i-1; j++){
			cout<<"*";
		}cout<<endl;
	}
}

//   *
//  ***
// *****
// *****
//  ***
//   *

void nStarDiamond(int n) {
    // Write your code here.
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
		for(int j=1; j<=2*i-1; j++){
			cout<<"*";
		}cout<<endl;
	}
    for(int i = n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
		for(int j=1; j<=2*i-1; j++){
			cout<<"*";
		}cout<<endl;
	}
}


// *
// **
// ***
// **
// *

void nStarTriangle(int n) {
    // Write your code here.
    for(int i = 1; i<=n; i++){
        
		for(int j=1; j<=i; j++){
			cout<<"*";
		}cout<<endl;
	}
    for(int i = n-1; i>=1; i--){
        
		for(int j=1; j<=i; j++){
			cout<<"*";
		}cout<<endl;
	}
}

