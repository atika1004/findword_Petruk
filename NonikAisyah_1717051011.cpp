for (int m=0;m<15;m++){
		for (int n=0;n<15;n++){
			if (masukan[0]==table[m][n]){
				
				
				for (int k=0;k<lenght_word;k++){
					if (masukan[k]==table[m][n+k]){
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
					if (masukan[k]==table[m][n-k]){
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
					if (masukan[k]==table[m+k][n]){
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
				
