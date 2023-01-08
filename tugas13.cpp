#include <iostream>
using namespace std;

int main(){
	
	struct rumah {
		string tipe_rumah;
		int jumlah_kamar;
		float luas_rumah;
		float tinggi_rumah; 
		string pemilik_rumah;
	};
	
	for (int i=0; i<2; i++){
	rumah rumah1[2];
	cout<<"Inputkan Tipe Rumah : ";
	cin>>rumah1[i].tipe_rumah;
	cout<<"Inputkan Jumlah Kamar : ";
	cin>>rumah1[i].jumlah_kamar;
	cout<<"Inputkan Luas rumah : ";
	cin>>rumah1[i].luas_rumah;
	cout<<"Inputkan Tinggi Rumah : ";
	cin>>rumah1[i].tinggi_rumah;
	cout<<"Inputkan Pemilik Rumah : ";
	cin>>rumah1[i].pemilik_rumah;
	cout<<endl;
}

	
	
	
	
	
}
