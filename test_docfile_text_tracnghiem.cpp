#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>
typedef struct cauhoi{
	char noidung[255];
	char cau1[100];
	char cau2[100];
	char cau3[100];
	char cau4[100];
	int dapan;
} CAUHOI;
FILE *fpCauHoi;
FILE *fpThiSinh;
//void doccauhoi();

int main(){
CAUHOI ds[30];
//nhapcauhoi();


CAUHOI t;
char s[200]="";
int i,n=0;
char c;
fpCauHoi=fopen("cauhoi.txt","rt");
if (fpCauHoi==NULL )
	printf("\nKhong mo duoc file ");
else
{
	while (feof(fpCauHoi)!=0)
	{ 	
		i=0;
		while (c=fgetc(fpCauHoi)!='\n')
		 {
		 	s[i++]=c;
		 }
		 s[i]='\0';
		 n++;
		 strcpy(t.noidung,s);
		if (strlen(s)>0)
		{
			i=0;
			while (c=fgetc(fpCauHoi)!='\n')
		 	{
		 		s[i++]=c;
		 	}
		 	s[i]='\0';
		 	strcpy(t.cau1,s);
		 	i=0;
		 	while (c=fgetc(fpCauHoi)!='\n')
		 	{
		 		s[i++]=c;
		 	}
		 	s[i]='\0';
		 	strcpy(t.cau2,s);
			i=0;
			while (c=fgetc(fpCauHoi)!='\n')
		 	{
		 		s[i++]=c;
		 	}
		 	s[i]='\0';
		 	strcpy(t.cau3,s);
		 	while (c=fgetc(fpCauHoi)!='\n')
		 	{
		 		s[i++]=c;
		 	}
		 	s[i]='\0';
		 	strcpy(t.cau4,s);
		 	i=0;
		 	while (c=fgetc(fpCauHoi)!='\n')
		 	{
		 		s[i++]=c;
		 	}
			 s[i]='\0';
		 	t.dapan=atoi(s);
		ds[n]=t;
		}
		}
fclose(fpCauHoi);

i=0;
int diem=0;
for (int i=0;i<n;i++)
  { 
   printf("\nCau hoi so: %d ",i+1);
   t=ds[i];
   printf("\n%s",t.noidung);
   printf("\n1. %s",t.cau1);
   printf("\n2. %s",t.cau2);
   printf("\n3. %s",t.cau3);
   int traloi;
   printf("\nCau tra loi cua ban la: ");
   scanf("%d",&traloi);
   if (t.dapan==traloi) diem++;   
   }
printf("\nSo cau ban tra loi dungla : %d/%d",diem,i);   
fclose(fpCauHoi);
}
}

