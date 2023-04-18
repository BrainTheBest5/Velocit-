//Calcolo della velocità in mph
#include <stdio.h>
int main(){
	//Raccolta dati
	int min;
	int sec;
	float km;
	printf("Inserisci i minti: ");
	scanf("%d",&min);
	printf("Inserisci i secondi: ");
	scanf("%d",&sec);
	printf("Inserisci i chilometri percorsi: ");
	scanf("%f",&km);
	//Calcoli
	int sec_tot;
	sec_tot=(min*60)+sec;
	float m;
	float m_s;
	m=km*1000;
	m_s=m/sec_tot;
	//Velocità in km/h. Uso la seguente proporzione (3600 sono i secondi in un ora):
	//km : km_h = secondi_totali : 3600
	float km_h;
	km_h=km*3600/sec_tot;
	//Velocità in mph
	float mph;
	mph=(km_h*1000)/1609.344;
	//Output
	printf("Velocità: %f m/s\n",m_s);
	printf("Velocità: %f km/h\n",km_h);
	printf("Velocità: %f mph",mph);
	return 0;
}