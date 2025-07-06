/**Marksheet Maker**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char choice;
	do
		{
			int fl_I, eng_I, zoo_I, bot_I, civics_I, eco_I, com_I, hist_I, m_IA, m_IB, phy_I, che_I, total_I;
			int fl_II, eng_II, zoo_II, bot_II, civics_II, eco_II, com_II, hist_II, m_IIA, m_IIB, phy_II, che_II, total_II;
			int chep, phyp, zoop, botp, total;
			char htn[15];
			char surname[8], pi[3], firstname[8], secondname[8], fname[20], mname[20], stream[4], fl[9], result[4];
			char grade;
			float percentage;
			// system("cls");
			printf("Enter Student's Hall Ticket No.:");
			scanf("%s", &htn);
			printf("Enter Student's Surname:");
			scanf("%s", &surname);
			printf("Enter Student's First Name:");
			scanf("%s", &firstname);
			printf("Enter Student's Last Name:");
			scanf("%s", &secondname);
			printf("Enter Student's Father Name:");
			scanf("%s", &fname);
			printf("Enter Student's Mother Name:");
			scanf("%s", &mname);
			printf("In which stream you had completed your Intermediate:(MPC/BiPC/CEC/HEC/MEC)");
			scanf("%s", &stream);
			if(strcmp(stream, "MPC")==0)
			{
				printf("What is your First Language:(Sanskrit/Telugu/Hindi)");
				scanf("%s", &fl);
				printf("Enter your First Year marks:");
				printf("\nEnter your %s-I marks:", fl);
				scanf("%d", &fl_I);
				printf("Enter your English-I marks:");
				scanf("%d", &eng_I);
				printf("Enter your Math-IA marks:");
				scanf("%d", &m_IA);
				printf("Enter your Math-IB marks:");
				scanf("%d", &m_IB);
				printf("Enter your Physics-I marks:");
				scanf("%d", &phy_I);
				printf("Enter your Chemistry-I marks:");
				scanf("%d", &che_I);
				printf("Now enter your Second Year Marks:");
				printf("\nEnter your %s-II marks:", fl);
				scanf("%d", &fl_II);
				printf("Enter your English-II marks:");
				scanf("%d", &eng_II);
				printf("Enter your Math-IIA marks:");
				scanf("%d", &m_IIA);
				printf("Enter your Math-IIB marks:");
				scanf("%d", &m_IIB);
				printf("Enter your Physics-II marks:");
				scanf("%d", &phy_II);
				printf("Enter your Chemistry-II marks:");
				scanf("%d", &che_II);
				printf("Enter your Practical marks in Physics:");
				scanf("%d", &phyp);
				printf("Enter your Practical marks in Chemistry:");
				scanf("%d", &chep);
				// system("cls");
				printf("____________________________________________________________________________\n");
				printf("Hall Ticket No.\t:%s", htn);
				printf("\nStudent Name\t:%s %s %s", surname, firstname, secondname);
				printf("\nFather Name\t:%s %s", surname, fname);
				printf("\nMother Name\t:%s %s", surname, mname);
				printf("\n____________________________________________________________________________");
				printf("\n First Year:\t\t\t\t Second Year:");
				printf("\n %s-I\t:%d", fl, fl_I);
				printf("\t\t\t %s-II\t:%d", fl, fl_II);
				printf("\n English-I \t:%d", eng_I);
				printf("\t\t\t English-II \t:%d", eng_II);
				printf("\n Math-IA \t:%d", m_IA);
				printf("\t\t\t Math-IIA \t:%d", m_IIA);
				printf("\n Math-IB \t:%d", m_IB);
				printf("\t\t\t Math-IIB \t:%d", m_IIB);
				printf("\n Physics-I \t:%d", phy_I);
				printf("\t\t\t Physics-II \t:%d", phy_II);
				printf("\n Chemistry-I \t:%d", che_I);
				printf("\t\t\t Chemistry-II \t:%d", che_II);
				total_I=fl_I+eng_I+m_IA+m_IB+phy_I+che_I;
				total_II=fl_II+eng_II+m_IIA+m_IIB+phy_II+che_II;
				printf("\n____________________________________________________________________________");	
				printf("\n Total \t:%d /470", total_I);
				printf("\t\t\t Total \t:%d /470", total_II);
				printf("\n____________________________________________________________________________");	
				printf("\n Practical Marks:");
				printf("\n Physics \t:%d", phyp);
				printf("\n Chemistry \t:%d", chep);
				total=total_I+total_II+phyp+chep;
				printf("\n____________________________________________________________________________");	
				printf("\n Overall Marks:%d /1000", total);
				percentage=(total/1000.0)*100;
				if (percentage>=75)
				{
					grade='A';
				}
				else if (percentage>=60)
				{
					grade='B';
				}
				else if (percentage>=50)
				{
					grade='C';
				}
				else
				{
					grade='D';
				}
				if ((fl_I<35)||(fl_II<35)||(eng_I<35)||(eng_II<35)||(m_IA<26)||(m_IIA<26)||(m_IB<26)||(m_IIB<26)||(phy_I<21)||(phy_II<21)||(che_I<21)||(che_II<21)||(phyp<15)||(chep<15))
				{
					strcpy(result, "FAIL");
				}
				else
				{
					strcpy(result, "PASS");
				}
				printf("\t\t\t Result:%c Grade %s", grade, result);
				printf("\n____________________________________________________________________________");	
			}
			else if(strcmp(stream, "BiPC")==0)
			{
				printf("What is your First Language:(Sanskrit/Telugu/Hindi)");
				scanf("%s", &fl);
				printf("Enter your First Year marks:");
				printf("\nEnter your %s-I marks:", fl);
				scanf("%d", &fl_I);
				printf("Enter your English-I marks:");
				scanf("%d", &eng_I);
				printf("Enter your Botany-I marks:");
				scanf("%d", &bot_I);
				printf("Enter your Zoology-I marks:");
				scanf("%d", &zoo_I);
				printf("Enter your Physics-I marks:");
				scanf("%d", &phy_I);
				printf("Enter your Chemistry-I marks:");
				scanf("%d", &che_I);
				printf("Now enter your Second Year Marks:");
				printf("\nEnter your %s-II marks:", fl);
				scanf("%d", &fl_II);
				printf("Enter your English-II marks:");
				scanf("%d", &eng_II);
				printf("Enter your Botany-II marks:");
				scanf("%d", &bot_II);
				printf("Enter your Zoology-II marks:");
				scanf("%d", &zoo_II);
				printf("Enter your Physics-II marks:");
				scanf("%d", &phy_II);
				printf("Enter your Chemistry-II marks:");
				scanf("%d", &che_II);
				printf("Enter your Practical Marks in Botany:");
				scanf("%d", &botp);
				printf("Enter your Practical Marks in Zoology:");
				scanf("%d", &zoop);
				printf("Enter your Practical marks in Physics:");
				scanf("%d", &phyp);
				printf("Enter your Practical marks in Chemistry:");
				scanf("%d", &chep);
				// system("cls");
				printf("____________________________________________________________________________\n");
				printf("Hall Ticket No.\t:%s", htn);
				printf("\nStudent Name\t:%s %s %s", surname, firstname, secondname);
				printf("\nFather Name\t:%s %s", surname, fname);
				printf("\nMother Name\t:%s %s", surname, mname);
				printf("\n____________________________________________________________________________");
				printf("\n First Year:\t\t\t\t Second Year:");
				printf("\n %s-I \t:%d", fl, fl_I);
				printf("\t\t\t %s-II \t:%d", fl, fl_II);
				printf("\n English-I \t:%d", eng_I);
				printf("\t\t\t English-II \t:%d", eng_II);
				printf("\n Botany-I \t:%d", bot_I);
				printf("\t\t\t Botany-II \t:%d", bot_II);
				printf("\n Zoology-I \t:%d", zoo_I);
				printf("\t\t\t Zoology-II \t:%d", zoo_II);
				printf("\n Physics-I \t:%d", phy_I);
				printf("\t\t\t Physics-II \t:%d", phy_II);
				printf("\n Chemistry-I \t:%d", che_I);
				printf("\t\t\t Chemistry-II \t:%d", che_II);
				total_I=fl_I+eng_I+bot_I+zoo_I+phy_I+che_I;
				total_II=fl_II+eng_II+bot_II+zoo_II+phy_II+che_II;
				printf("\n____________________________________________________________________________");	
				printf("\n Total \t:%d /440", total_I);
				printf("\t\t\t Total \t:%d /440", total_II);
				printf("\n____________________________________________________________________________");	
				printf("\n Practical Marks:");
				printf("\n Botany \t:%d", botp);
				printf("\n Zoology \t:%d", zoop);
				printf("\n Physics \t:%d", phyp);
				printf("\n Chemistry \t:%d", chep);
				total=total_I+total_II+phyp+chep+zoop+botp;
				printf("\n____________________________________________________________________________");	
				printf("\n Overall Marks:%d /1000", total);
				percentage=(total/1000.0)*100;
				if (percentage>=75)
				{
					grade='A';
				}
				else if (percentage>=60)
				{
					grade='B';
				}
				else if (percentage>=50)
				{
					grade='C';
				}
				else
				{
					grade='D';
				}
				if ((fl_I<35)||(fl_II<35)||(eng_I<35)||(eng_II<35)||(bot_I<21)||(bot_II<21)||(zoo_I<21)||(zoo_II<21)||(phy_I<21)||(phy_II<21)||(che_I<21)||(che_II<21)||(botp<21)||(zoop<21)||(phyp<21)||(chep<21))
				{
					strcpy(result, "FAIL");
				}
				else
				{
					strcpy(result, "PASS");
				}
				printf("\t\t\t Result:%c Grade %s", grade, result);
				printf("\n____________________________________________________________________________");	
			}
			else if (strcmp(stream, "CEC")==0)
			{
				printf("What is your First Language:(Sanskrit/Telugu/Hindi)");
				scanf("%s", &fl);
				printf("Enter your First Year marks:");
				printf("\nEnter your %s-I marks:", fl);
				scanf("%d", &fl_I);
				printf("Enter your English-I marks:");
				scanf("%d", &eng_I);
				printf("Enter your Civics-I marks:");
				scanf("%d", &civics_I);
				printf("Enter your Economics-I marks:");
				scanf("%d", &eco_I);
				printf("Enter your Commerce-I marks:");
				scanf("%d", &com_I);
				printf("Now enter your Second Year Marks:");
				printf("\nEnter your %s-II marks:", fl);
				scanf("%d", &fl_II);
				printf("Enter your English-II marks:");
				scanf("%d", &eng_II);
				printf("Enter your Civics-II marks:");
				scanf("%d", &civics_II);
				printf("Enter your Economics-II marks:");
				scanf("%d", &eco_II);
				printf("Enter your Commerce-II marks:");
				scanf("%d", &com_II);
				// system("cls");
				printf("____________________________________________________________________________\n");
				printf("Hall Ticket No.\t:%s", htn);
				printf("\nStudent Name\t:%s %s %s", surname, firstname, secondname);
				printf("\nFather Name\t:%s %s", surname, fname);
				printf("\nMother Name\t:%s %s", surname, mname);
				printf("\n____________________________________________________________________________");
				printf("\n First Year:\t\t\t\t Second Year:");
				printf("\n %s-I \t:%d", fl, fl_I);
				printf("\t\t\t %s-II \t:%d", fl, fl_II);
				printf("\n English-I \t:%d", eng_I);
				printf("\t\t\t English-II \t:%d", eng_II);
				printf("\n Civics-I \t:%d", civics_I);
				printf("\t\t\t Civics-II \t:%d", civics_II);
				printf("\n Economics-I \t:%d", eco_I);
				printf("\t\t\t Economics-II \t:%d", eco_II);
				printf("\n Commerce-I \t:%d", com_I);
				printf("\t\t\t Commerce-II \t:%d", com_II);
				total_I=fl_I+eng_I+civics_I+eco_I+com_I;
				total_II=fl_II+eng_II+civics_II+eco_II+com_II;
				printf("\n____________________________________________________________________________");	
				printf("\n Total \t:%d /500", total_I);
				printf("\t\t\t Total \t:%d /500", total_II);
				printf("\n____________________________________________________________________________");	
				total=total_I+total_II;
				printf("\n Overall Marks:%d /1000", total);
				percentage=(total/1000.0)*100;
				if (percentage>=75)
				{
					grade='A';
				}
				else if (percentage>=60)
				{
					grade='B';
				}
				else if (percentage>=50)
				{
					grade='C';
				}
				else
				{
					grade='D';
				}
				if ((fl_I<35)||(fl_II<35)||(eng_I<35)||(eng_II<35)||(civics_I<35)||(civics_II<35)||(eco_I<35)||(eco_II<35)||(com_I<35)||(com_II<35))
				{
					result=="PASS";
				}
				else
				{
					result=="FAIL";
				}
				printf("\t\t Result:%c Grade %s", grade, result);
				printf("\n____________________________________________________________________________");	
			}
			else if (strcmp(stream, "HEC")==0)
			{
				printf("What is your First Language:(Sanskrit/Telugu/Hindi)");
				scanf("%s", &fl);
				printf("Enter your First Year marks:");
				printf("\nEnter your %s-I marks:", fl);
				scanf("%d", &fl_I);
				printf("Enter your English-I marks:");
				scanf("%d", &eng_I);
				printf("Enter your History-I marks:");
				scanf("%d", &hist_I);
				printf("Enter your Economics-I marks:");
				scanf("%d", &eco_I);
				printf("Enter your Commerce-I marks:");
				scanf("%d", &com_I);
				printf("Now enter your Second Year Marks:");
				printf("\nEnter your %s-II marks:", fl);
				scanf("%d", &fl_II);
				printf("Enter your English-II marks:");
				scanf("%d", &eng_II);
				printf("Enter your History-II marks:");
				scanf("%d", &hist_II);
				printf("Enter your Economics-II marks:");
				scanf("%d", &eco_II);
				printf("Enter your Commerce-II marks:");
				scanf("%d", &com_II);
				// system("cls");
				printf("____________________________________________________________________________\n");
				printf("Hall Ticket No.\t:%s", htn);
				printf("\nStudent Name\t:%s %s %s", surname, firstname, secondname);
				printf("\nFather Name\t:%s %s", surname, fname);
				printf("\nMother Name\t:%s %s", surname, mname);
				printf("\n____________________________________________________________________________");
				printf("\n First Year:\t\t\t\t Second Year:");
				printf("\n %s-I \t:%d", fl, fl_I);
				printf("\t\t\t %s-II \t:%d", fl, fl_II);
				printf("\n English-I \t:%d", eng_I);
				printf("\t\t\t English-II \t:%d", eng_II);
				printf("\n History-I \t:%d", hist_I);
				printf("\t\t\t History-II \t:%d", hist_II);
				printf("\n Economics-I \t:%d", eco_I);
				printf("\t\t\t Economics-II \t:%d", eco_II);
				printf("\n Commerce-I \t:%d", com_I);
				printf("\t\t\t Commerce-II \t:%d", com_II);
				total_I=fl_I+eng_I+hist_I+eco_I+com_I;
				total_II=fl_II+eng_II+hist_II+eco_II+com_II;
				printf("\n____________________________________________________________________________");	
				printf("\n Total \t:%d /500", total_I);
				printf("\t\t\t Total \t:%d /500", total_II);
				printf("\n____________________________________________________________________________");	
				total=total_I+total_II;
				printf("\n Overall Marks:%d /1000", total);
				percentage=(total/1000.0)*100;
				if (percentage>=75)
				{
					grade='A';
				}
				else if (percentage>=60)
				{
					grade='B';
				}
				else if (percentage>=50)
				{
					grade='C';
				}
				else
				{
					grade='D';
				}
				if ((fl_I<35)||(fl_II<35)||(eng_I<35)||(eng_II<35)||(eco_I<35)||(eco_II<35)||(com_I<35)||(com_II<35)||(hist_I<35)||(hist_II<35))
				{
				  	strcpy(result, "FAIL");
				}
				else
				{
					strcpy(result, "PASS");
				}
				printf("\t\t Result:%c Grade %s", grade, result);
				printf("\n____________________________________________________________________________");	
			}
			else
			{
				printf("What is your First Language:(Sanskrit/Telugu/Hindi)");
				scanf("%s", &fl);
				printf("Enter your First Year marks:");
				printf("\nEnter your %s-I marks:", fl);
				scanf("%d", &fl_I);
				printf("Enter your English-I marks:");
				scanf("%d", &eng_I);
				printf("Enter your Math-IA marks:");
				scanf("%d", &m_IA);
				printf("Enter your Math-IB marks:");
				scanf("%d", &m_IB);
				printf("Enter your Economics-I marks:");
				scanf("%d", &eco_I);
				printf("Enter your Commerce-I marks:");
				scanf("%d", &com_I);
				printf("Now enter your Second Year Marks:");
				printf("\nEnter your %s-II marks:", fl);
				scanf("%d", &fl_II);
				printf("Enter your English-II marks:");
				scanf("%d", &eng_II);
				printf("Enter your Math-IIA marks:");
				scanf("%d", &m_IIA);
				printf("Enter your Math-IIB marks:");
				scanf("%d", &m_IIB);
				printf("Enter your Economics-II marks:");
				scanf("%d", &eco_II);
				printf("Enter your Commerce-II marks:");
				scanf("%d", &com_II);
				// system("cls");
				printf("____________________________________________________________________________\n");
				printf("Hall Ticket No.\t:%s", htn);
				printf("\nStudent Name\t:%s %s %s", surname, firstname, secondname);
				printf("\nFather Name\t:%s %s", surname, fname);
				printf("\nMother Name\t:%s %s", surname, mname);
				printf("\n____________________________________________________________________________");
				printf("\n First Year:\t\t\t\t Second Year:");
				printf("\n %s-I\t:%d", fl, fl_I);
				printf("\t\t\t %s-II\t:%d", fl, fl_II);
				printf("\n English-I \t:%d", eng_I);
				printf("\t\t\t English-II \t:%d", eng_II);
				printf("\n Math-IA \t:%d", m_IA);
				printf("\t\t\t Math-IIA \t:%d", m_IIA);
				printf("\n Math-IB \t:%d", m_IB);
				printf("\t\t\t Math-IIB \t:%d", m_IIB);
				printf("\n Economics-I \t:%d", eco_I);
				printf("\t\t\t Economics-II \t:%d", eco_II);
				printf("\n Commerce-I \t:%d", com_I);
				printf("\t\t\t Commerce-II \t:%d", com_II);
				total_I=fl_I+eng_I+m_IA+m_IB+eco_I+com_I;
				total_II=fl_II+eng_II+m_IIA+m_IIB+eco_II+com_II;
				printf("\n____________________________________________________________________________");	
				printf("\n Total \t:%d /470", total_I);
				printf("\t\t\t Total \t:%d /470", total_II);
				total=total_I+total_II;
				printf("\n____________________________________________________________________________");	
				printf("\n Overall Marks:%d /1000", total);
				percentage=(total/1000.0)*100;
				if (percentage>=75)
				{
					grade='A';
				}
				else if (percentage>=60)
				{
					grade='B';
				}
				else if (percentage>=50)
				{
					grade='C';
				}
				else
				{
					grade='D';
				}
				if ((fl_I<35)||(fl_II<35)||(eng_I<35)||(eng_II<35)||(eco_I<35)||(eco_II<35)||(com_I<35)||(com_II<35)||(m_IA<26)||(m_IIA<26)||(m_IB<26)||(m_IIB<26))
				{
					strcpy(result, "FAIL");
				}
				else
				{
					strcpy(result, "PASS");
				}
				printf("\t\t\t Result:%c Grade %s", grade, result);
				printf("\n____________________________________________________________________________");	
			}

			printf("Do you want to continue?(Y/N)");
			scanf(" %c", &choice);
		}while(choice=='Y'||choice=='y');

	return 0;
	
}
