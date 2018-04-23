//neng

#include <iostream>
#include <cstring>

using namespace std;
main(){
	
	int check, lenght_word, word_finded;
	char masukan[200];
	word_finded=0;
	
	cout<<endl;
	
	cout<<"--------Assalamu'alaykum Wr Wb--------"<<endl;
	cout<<endl;
	cout<<"Selamat Datang Dalam Program Teka Teki"<<endl;
	cout<<"-------Mencari Kata Di Table Ini------"<<endl;
	cout<<endl;
	
	cout<<"Nama-nama Kelompok : "<<endl;
	cout<<endl;
	cout<<"Meria Nensi     - 1717051015"<<endl;
	cout<<"Nonik Aisyah    - 1717051011"<<endl;
	cout<<"Wulan Seftiani  - 1717051031"<<endl;
	cout<<endl;
	cout<<"Kelas: A"<<endl; 
	cout<<endl;
	
	cout<<"___________________________________________________________________________"<<endl;
	cout<<endl;
	
	char table[15][15]={ {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
						  {'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
						  {'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
						  {'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
						  {'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
						  {'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
						  {'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
						  {'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
						  {'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
						  {'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
						  {'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
						  {'l','q','z','q','n','n','m','r','z','j','c','a','c','a','g'},
						  {'m','o','s','g','z','c','z','e','t','d','a','c','a','c','o'},
						  {'p','d','c','r','z','m','s','n','g','r','c','n','r','a','z'},
						  {'o','h','n','k','z','w','a','t','e','r','a','c','a','c','a'}};
						  
	for(int m=0;m<15;m++){
		for (int n=0;n<15;n++)
		{
			
			cout<<table[m][n]<<" ";
		}
		
		cout<<endl;
	}				
	
		cout<<endl;
		
		cout<<"|-----------------------------------------------------------------|"<<endl;
		cout<<"|Carilah Kata-Kata Dibawah ini Dengan Lihat Tabel Diatas Ada/Tidak|"<<endl;
		cout<<"|-----------------------------------------------------------------|"<<endl;
		cout<<endl;
		cout<<"Daftar Kata di Vclass :"<<endl;
		cout<<"aunt, boot, bread, brick, dinner, food, frog, goose, lock, lunch, parent, park, plot, song, spark, space, winter,water, week"<<endl;
		
		
		cout<<endl;
	
		cout << "Input Word to Find That Table : " <<endl;
			cin>>masukan;
	
		lenght_word=strlen(masukan);
