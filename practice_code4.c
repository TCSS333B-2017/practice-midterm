
typedef struct{
 int id;
 float x,y,z;
}box;

int boxVolume(char *input, char *output){
	FILE *ifp=fopen(input,"r");
	FILE *ofp=fopen(output,"w"(;
	if(!ifp || !ofp)return 1;
	box b;
	while (fread(&b,sizeof(b),1,ifp){
		fprintf(ofp,"%d\t%.2f\n",b.id, b.x*.b.y*b.z);
	}	
 fclose(ifp);	
	fclose(ofp);
	return 0;	
}
//for a text file with the id and coordinates written out space delimited one box per line and writing to binary - the same pattern

int boxReadTextWriteBinary(char *input, char *output){
	FILE *ifp=fopen(input,"r");
	FILE *ofp=fopen(output,"w"(;
	if(!ifp || !ofp)return 1;
	box b;
	char line[1024];
	while (fgets(line,sizeof(line),ifp)){ //read in at most 1023 before truncating
		sscanf(line,"%d %f %f %f",&(b.id), &(b.x),&(b.y),&(b.z));
		fwrite(&b,sizeof(b),1,ofp);
	}	
 fclose(ifp);	
	fclose(ofp);
	return 0;	
}
