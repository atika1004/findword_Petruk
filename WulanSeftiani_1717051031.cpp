for (int k=0;k<lenght_word;k++){
					if (masukan[k]==table[m-k][m]){
						check=k;
					}
					else{
						break;
					}
					
				}
				if (check==lenght_word-1){
					word_finded+=1;
				}
				
				else{
					word_finded+=0;
				}
				check=0;
				
				
				for (int k=0;k<lenght_word;k++){
					if (masukan[k]==table[m-k][n-k]){
						check=k;
					}
					else{
						break;
					}
				}
				if (check==lenght_word-1){
					word_finded+=1;
				}
				else{
					word_finded+=0;
				}
				check=0;
				
				
				for (int k=0;k<lenght_word;k++){
					if (masukan[k]==table[m-k][n+k]){
						check=k;
					}
					else{
						break;
					}
				}
				if (check==lenght_word-1){
					word_finded+=1;
				}
				else{
					word_finded+=0;
				}
				check=0;
				
				
				for (int k=0;k<lenght_word;k++){
					if (masukan[k]==table[m+k][n-k]){
						check=k;
					}
					else{
						break;
					}
				}
				if (check==lenght_word-1){
					word_finded+=1;
				}
				else{
					word_finded+=0;
				}
				check=0;
				
				
				for (int k=0;k<lenght_word;k++){
					if (masukan[k]==table[m+k][n+k]){
						check=k;
					}
					else{
						break;
					}
				}
				if (check==lenght_word-1){
					word_finded+=1;
				}
				else{
					word_finded+=0;
				}
				check=0;
				
			}
			
		}
	}
	if(word_finded>0){
		cout<<"ADA";
	}
	else {
		cout<<"TIDAK ADA";
	}
}	
