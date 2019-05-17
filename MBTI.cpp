#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

void ex2();
void ix2();
void inx2();
void snx2();
void thx2();
void fex2();
void jux2();
void pex2();

int e = 0, i = 0, in = 0, sn = 0, th = 0, fe = 0, ju = 0, pe = 0, repeatcount = 1;

int main(){
	char per[5];
	printf("\n\n\n\t\t\tWelcome to the MBTI test!\n\n\n\n\t\tThis test is the property of Myers Briggs\n\n\t\tThe test is programmed by Abdullah Khan\n\n\t\tPress any key to continue");
	_getch();
	system("cls");
	printf("\n\n\n\t\tYou will asked to answer 40 questions in total.\n\n\n\n\t\tThese will test the different dimentions of your\n\t\tpersonality.\n\n\n\n\n\t\tPlease ensure that you have 15 to 20 minutes to\n\t\tperform the test.");
	_getch();
	system("cls");
	printf("\n\nEnter the option number that describes you best, enter the number according to\nthe extent to which the statement describes you.\n\n\n\n");
	printf("1.I have active involvement in events and activities.");
	ex2();
	printf("2.You get energised from being around people.");
	ex2();
	if (e < 3){
	printf("3.I think and reflect carefully before I act."); 
	ix2();
	system("cls");
	printf("\n\n\n\n\n");
	}
	else {printf("3.You are more willing to act and make things happen rather than to sit and\nthink about them");
	ex2();
	system("cls");
	printf("\n\n\n\n\n");}
	printf("4.I am seen as an \"Outgoing\" or a \"people's person\"");
	ex2();
	printf("5.I like to do activities alone or with one or two people I feel comfortable with.");
	ix2();
	printf("6.I feel at home when I\'m with people.");
	ex2();
	system("cls");
	printf("\n\n\n\n\n");
	printf("7. I understand the problem better when I talk aloud about it and hear the opinion\nof other people about it.");
	ex2();
	printf("8.I am seen as reflective and reserved.");
	ix2();
	if (i < 3){
		printf("9.I have a wide range of friends and know alot of people.");ex2();
	system("cls");
	printf("\n\n\n\n\n");}
	else {printf("9.I prefer to know just a few people well.");
	ix2();
	system("cls");
	printf("\n\n\n\n\n");}
	printf("10. I like ideas better than the real thing.");
	ix2();

	/*Sensing and Intuition*/
	
	printf("11.I pay more attention to physical reality rather than the meaning and patterns of\nthe information I get.");
	snx2();
	printf("12.I start with the facts and then form a big picture.");
	snx2();
	system("cls");
	printf("\n\n\n\n\n");
	if (sn <= 2){
		printf("13.I remember events events by the impression they leave rather than the details.");
		inx2();
	}
	else {printf("13.I remember events as snapchats of what actually happened."); snx2();}
	printf("14.I solve problems by leaping between different possibilities.");
	inx2();
	printf("15.I like doing things that are new and different.");
	inx2();
	system("cls");
	printf("\n\n\n\n\n");
	if (in <= 4){
		printf("16.I sometimes miss new possibilities by paying alot of attention to facts either\nfrom present or past");
		snx2();
	}
	else {
		printf("16. Sometimes I think so much about new possibilities that I forget to think about how\nto make them a reality.");
		inx2();
	}
	printf("17.I solve problems by working through facts until I solve the problem.");
	snx2();
	printf("18.I like to work with symbols and abstract theories, even if I don't know how I'll use\nthem.");
	inx2();
	system("cls");
	printf("\n\n\n\n\n");
	printf("19.I am mostly concerned with what is actual, present, current and real.");
	snx2();
	printf("20.I learn by thinking rather than hands on experience");
	inx2();
	printf("21.I like to analyze pros and cons, and try to be consistent and logical rather than being\n being led by my emotions while making a decision.");
	thx2();
	system("cls");
	printf("\n\n\n\n\n");
	printf("22.I look for logical explainations or solutions to almost everything.");
	thx2();
	if (th <= 2){
		printf("23.I believe I make a decision by the point of view of persons included in a situation.");
		fex2();
	}
	else { printf("23. When I make a decision I like to find the basic truth or the principle to be\napplied, regardless of the specific situation.");
	thx2();
	}
	if (fe <= 1){
		printf("24.I make decisions with my head to be fair.");
		thx2();
		system("cls");
	printf("\n\n\n\n\n");
	}
	else {
		printf("24.I make decisions with my heart and want to be compassionate.");
		fex2();
		system("cls");
	printf("\n\n\n\n\n");
	}
	if (th < 8){
		printf("25.Sometimes I miss seeing the \"hard truth\" of situations.");
		fex2();
	}
	else {
	printf("25.Sometimes I miss or don\'t value the \"people part\" of a situation.");
	thx2();
	}
	printf("26.I enjoy technical and scientific fields.");
	thx2();
	printf("27.I look for what is important to other and express concern for others.");
	fex2();
	system("cls");
	printf("\n\n\n\n\n");
	printf("28.I am concerned with values and what is best for the people involved.");
	fex2();
	printf("29.I can be seen as too task oriented, uncaring or indifferent.");
	thx2();
	printf("30.I notice inconsistencies in situations.");
	thx2();
	system("cls");
	printf("\n\n\n\n\n");
	printf("31.My decisions are based on my senses rather than logical processes.");
	pex2();
	printf("32.I prefer an orederly way of life rather than a spontaneous one.");
	jux2();
	printf("33.I feel comfortable when I am open to new opinions rather than taking a decision.");
	pex2();
	system("cls");
	printf("\n\n\n\n\n");
	if (pe <= 2){
	printf("34.I like to have things decided.");
	jux2();
	}
	else {
		printf("34.I like to stay open, to respond to whatever happens.");
		pex2();
	}
	printf("35.I am loose and casual. I like to keep plans to a minimum.");
	pex2();
	if (pe <= 3){
		printf("36.i like to get my work done before plaing.");
		jux2();
		system("cls");
	printf("\n\n\n\n\n");
	}
	else {
		printf("36.I like to approach work as a mix of play and work.");
		pex2();
		system("cls");
	printf("\n\n\n\n\n");
	}
	printf("37.I like to make lists of things to do.");
	jux2();
	printf("38.Sometimes I focus so much on the goal that I miss new information.");
	jux2();
	printf("39.I work in bursts of energy.");
	pex2();
	system("cls");
	printf("\n\n\n\n\n");
	printf("40.I plan work to avoid rushing just before a deadline.");
	jux2();
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\tYour test is now complete. Press any key to get your result!\n");
	_getch();
	system("cls");
	if (e > i){
		per[0] = 'E';
		printf("\t\t\tYour personality type is: \n\n\t\t\t\t   E");
	}
	else {
		per[0] = 'I';
		printf("\t\t\tYour personality type is: \n\n\t\t\t\t   I");
	}
	if (sn > in){
		per[1] = 'S';
		printf("S");
	}
	else { 
		per[1] = 'N';
		printf("N");
	}
	if (th > fe){
		per[2] = 'T';
		printf("T");	
	}
	else {
		per[2] = 'F';
		printf("F");
	}
	if (ju > pe){
		per[3] = 'J';
		printf("J\n\n");
	}
	else {
		per[3] = 'P';
		printf("P\n\n");
	}
	if (e == i){
		printf("You are both extroverted and introverted, 50 percent each.\n");
	}
	if (sn == in){
		printf("You are both a sensing type and intuition type, 50 percent each.\n");
	}
	if (th == fe){
		printf("You are both a thinking type and feeling type, 50 percent each.\n");
	}
	if (ju == pe){
		printf("You are both a judgeent type and perceving type, 50 percent each.\n");
	}
	if (per[0] == 'I' && per[1] == 'S' && per[2] == 'T' && per[3] == 'J'){
		printf("Some qualities of ISTJs are as under, please refer to the internet for more \ninformation.\n\n\t\tISTJ(Introverted, Sensing, Thinking, Judgement):\n\n   Quiet, serious, earn success by thoroughness and dependability. Practical,\nmatter-of-fact, realistic, and responsible. Decide logically what should be\ndone and work toward it steadily, regardless of distractions. Take pleasure\nin making everything orderly and organized - their work, their home, their\nlife. Value traditions and loyalty.");
	}
	if (per[0] == 'I' && per[1] == 'S' && per[2] == 'F' && per[3] == 'J'){
		printf("Some qualities of ISFJs are as under, please refer to the internet for more \ninformation.\n\n\t\tISFJ(Introverted, Sensing, Feeling, Judgement):\n\n   Quiet, friendly, responsible, and conscientious. Committed and steady in \n   meeting their obligations. Thorough, painstaking, and accurate. Loyal,\nconsiderate, notice and remember specifics about people who are important to\nthem, concerned with how others feel. Strive to create an orderly and \nharmonious environment at work and at home.");
	}
	if (per[0] == 'I' && per[1] == 'N' && per[2] == 'F' && per[3] == 'J'){
		printf("Some qualities of INFJs are as under, please refer to the internet for more \ninformation.\n\n\t\tINFJ(Introverted, Intuition, Feeling, Judgement):\n\n  Seek meaning and connection in ideas, relationships, and material possessions.Want to understand what motivates people and are insightful about others.\nConscientious and committed to their firm values. Develop a clear vision about\nhow best to serve the common good. Organized and decisive in implementing their\nvision.");
	}
	if (per[0] == 'I' && per[1] == 'N' && per[2] == 'T' && per[3] == 'J'){
		printf("Some qualities of INTJs are as under, please refer to the internet for more \ninformation.\n\n\t\tINTJ(introverted, Intuition, Thinking, Judg132ement):\n\n  Have original minds and great drive for implementing their ideas and achievingtheir goals. Quickly see patterns in external events and develop long-range\nexplanatory perspectives. When committed, organize a job and carry it through.\nSkeptical and independent, have high standards of competence and performance -\nfor themselves and others.");
	}
	if (per[0] == 'I' && per[1] == 'S' && per[2] == 'T' && per[3] == 'P'){
		printf("Some qualities of ISTPs are as under, please refer to the internet for more \ninformation.\n\n\t\tISTP(Introverted, Sensing, Thinking, Perception):\n\nTolerant and flexible, quiet observers until a problem appears, then act quicklyto find workable solutions. Analyze what makes things work and readily get\nthrough large amounts of data to isolate the core of practical problems.\nInterested in cause and effect, organize facts using logical principles, value\nefficiency.");
	}
	if (per[0] == 'I' && per[1] == 'S' && per[2] == 'F' && per[3] == 'P'){
		printf("Some qualities of ISFPs are as under, please refer to the internet for more \ninformation.\n\n\t\tISFP(Introverted, Sensing, Feeling, Perception):\n\n   Quiet, friendly, sensitive, and kind. Enjoy the present moment, what's going on around them. Like to have their own space and to work within their own time\nframe. Loyal and committed to their values and to people who are important to\nthem. Dislike disagreements and conflicts, do not force their opinions or valueson others.");
	}
	if (per[0] == 'I' && per[1] == 'N' && per[2] == 'F' && per[3] == 'P'){
		printf("\nSome qualities of INFPs are as under, please refer to the internet for more \ninformation.\n\n\t\tINFP(Introverted, Intuition, Feeling, Perception):\n\n   Idealistic, loyal to their values and to people who are important to them.\nWant an external life that is congruent with their values. Curious, quick to see possibilities, can be catalysts for implementing ideas. Seek to understand\npeople and to help them fulfill their potential. Adaptable, flexible, and\naccepting unless a value is threatened.");
	}
	if (per[0] == 'I' && per[1] == 'N' && per[2] == 'T' && per[3] == 'P'){
		printf("Some qualities of INTPs are as under, please refer to the internet for more \ninformation.\n\n\t\tINTP(Introverted, Intuition, Thinking, Perception):\n\n   Seek to develop logical explanations for everything that interests them.\nTheoretical and abstract, interested more in ideas than in social interaction.\nQuiet, contained, flexible, and adaptable. Have unusual ability to focus in\ndepth to solve problems in their area of interest. Skeptical, sometimes\ncritical, always analytical.");
	}
	if (per[0] == 'E' && per[1] == 'S' && per[2] == 'T' && per[3] == 'P'){
		printf("Some qualities of ESTPs are as under, please refer to the internet for more \ninformation.\n\n\t\tESTP(Extroverted, Sensing, Thinking, Perception):\n\n   Flexible and tolerant, they take a pragmatic approach focused on immediate\nresults. Theories and conceptual explanations bore them - they want to act\nenergetically to solve the problem. Focus on the here-and-now, spontaneous,enjoyeach moment that they can be active with others. Enjoy material comforts and\n style. Learn best through doing.");
	}
	if (per[0] == 'E' && per[1] == 'S' && per[2] == 'F' && per[3] == 'P'){
		printf("Some qualities of ESFPs are as under, please refer to the internet for more \ninformation.\n\n\t\tESFP(Extroverted, Sensing, Feeling, Perception):\n\n   Outgoing, friendly, and accepting. Exuberant lovers of life, people, and\nmaterial comforts. Enjoy working with others to make things happen. Bring commonsense and a realistic approach to their work, and make work fun. Flexible and\nspontaneous, adapt readily to new people and environments. Learn best by trying\na new skill with other people.");
	}
	if (per[0] == 'E' && per[1] == 'N' && per[2] == 'F' && per[3] == 'P'){
		printf("Some qualities of ENFPs are as under, please refer to the internet for more \ninformation.\n\n\t\tENFP(Extroverted, Intuition, Feeling, Perception):\n\n   Warmly enthusiastic and imaginative. See life as full of possibilities. Make connections between events and information very quickly, and confidently proceed based on the patterns they see. Want a lot of affirmation from others, and\nreadily give appreciation and support. Spontaneous and flexible, often rely on\ntheir ability to improvise and their verbal fluency.");
	}
	if (per[0] == 'E' && per[1] == 'N' && per[2] == 'T' && per[3] == 'P'){
		printf("Some qualities of ENTPs are as under, please refer to the internet for more\ninformation.\n\n\t\tENTP(Extroverted, Intuition, Thinking, Perception):\n\n   Quick, ingenious, stimulating, alert, and outspoken. Resourceful in solving\nnew and challenging problems. Adept at generating conceptual possibilities and\nthen analyzing them strategically. Good at reading other people. Bored by\nroutine, will seldom do the same thing the same way, apt to turn to one new\ninterest after another.");
	}
	if (per[0] == 'E' && per[1] == 'S' && per[2] == 'T' && per[3] == 'J'){
		printf("Some qualities of ESTJs are as under, please refer to the internet for more \ninformation.\n\n\t\tESTJ(Extroverted, Sensing, Thinking, Judgement):\n\n   Practical, realistic, matter-of-fact. Decisive, quickly move to implement\ndecisions. Organize projects and people to get things done, focus on getting\n results in the most efficient way possible. Take care of routine details. Have\na clear set of logical standards, systematically follow them and want others to\nalso. Forceful in implementing their plans.");
	}
	if (per[0] == 'E' && per[1] == 'S' && per[2] == 'F' && per[3] == 'J'){
		printf("Some qualities of ESFJs are as under, please refer to the internet for more \ninformation.\n\n\t\tESFJ(Extroverted, Sensing, Feeling, Judgement):\n\n  Warmhearted, conscientious, and cooperative. Want harmony in their environment, work with determination to establish it. Like to work with others to complete tasks accurately and on time. Loyal, follow through even in small matters.\nNotice what others need in their day-by-day lives and try to provide it. Want tobe appreciated for who they are and for what they contribute.");
	}
	if (per[0] == 'E' && per[1] == 'N' && per[2] == 'F' && per[3] == 'J'){
		printf("Some qualities of ENFJs are as under, please refer to the internet for more \ninformation.\n\n\t\tENFJ(Extroverted, Intuition, Feeling, Judgement):\n\n   Warm, empathetic, responsive, and responsible. Highly attuned to the emotions, needs, and motivations of others. Find potential in everyone, want to help\nothers fulfill their potential. May act as catalysts for individual and group\ngrowth. Loyal, responsive to praise and criticism. Sociable, facilitate others\nin a group, and provide inspiring leadership.");
	}
	if (per[0] == 'E' && per[1] == 'N' && per[2] == 'T' && per[3] == 'J'){
		printf("Some qualities of ENTJs are as under, please refer to the internet for more \ninformation.\n\n\t\tENTJ(Extroverted, Intuition, Thinking, Judgement):\n\n   Frank, decisive, assume leadership readily. Quickly see illogical and\ninefficient procedures and policies, develop and implement comprehensive systemsto solve organizational problems. Enjoy long-term planning and goal setting.\nUsually well informed, well read, enjoy expanding their knowledge and passing iton to others. Forceful in presenting their ideas.");
	}
	_getch();
	char repeat;
	
	system("cls");
	printf("\n\n\n\n\t\tPress * to take the test again.\n\n\t\tOr press any other key to exit.");
	
	repeat = getch();
	if (repeat == '*'){
		system("cls");
		printf("\n\n\t\tYou are repeating this test %d times.", repeatcount);
		repeatcount += 1;
		main();
	}
	return 70856775897985;
}

void ex2(){
	char user;
	printf("\n\n1-No\t2-Very little\t3-To a normal extent\t4-Mostly\t5-Very Much\nYour answer: ");
	user = getch();
	printf("%c", user);
	while (atoi(&user) != 1 && atoi(&user) != 2 && atoi(&user) != 3 && atoi(&user) != 4 && atoi(&user) != 5){
		printf("\n\nYou have enter an invalid number, please enter again\nYour Answer: ");
		user = getch();
		printf("%c", user);
	}
	if ((atoi(&user) - 1) <= 1){
		i += 4 - atoi(&user);
	}

	printf("\n\n\n\n");
	e += (atoi(&user) - 1);
}

void ix2(){
	char user;
	printf("\n1-No\t2-Very little\t3-To a normal extent\t4-Mostly\t5-Very Much\nYour answer: ");
	user = getch();
	printf("%c", user);
	while (atoi(&user) != 1 && atoi(&user) != 2 && atoi(&user) != 3 && atoi(&user) != 4 && atoi(&user) != 5){
		printf("\n\nYou have enter an invalid number, please enter again\nYour Answer: ");
		user = getch();
		printf("%c", user);
	}
	if ((atoi(&user) - 1) <= 1){
		e += 4 - atoi(&user);
	}

	printf("\n\n\n\n");
	i += (atoi(&user) - 1);
}

void inx2(){
	char user;
	printf("\n1-No\t2-Very little\t3-To a normal extent\t4-Mostly\t5-Very Much\nYour answer: ");
	user = getch();
	printf("%c", user);
	while (atoi(&user) != 1 && atoi(&user) != 2 && atoi(&user) != 3 && atoi(&user) != 4 && atoi(&user) != 5){
		printf("\n\nYou have enter an invalid number, please enter again\nYour Answer: ");
		user = getch();
		printf("%c", user);
	}
	if ((atoi(&user) - 1) <= 1){
		sn += 4 - atoi(&user);
	}

	printf("\n\n\n\n");
	in += (atoi(&user) - 1);
}

void snx2(){
	char user;
	printf("\n1-No\t2-Very little\t3-To a normal extent\t4-Mostly\t5-Very Much\nYour answer: ");
	user = getch();
	printf("%c", user);
	while (atoi(&user) != 1 && atoi(&user) != 2 && atoi(&user) != 3 && atoi(&user) != 4 && atoi(&user) != 5){
		printf("\n\nYou have enter an invalid number, please enter again\nYour Answer: ");
		user = getch();
		printf("%c", user);
	}
	if ((atoi(&user) - 1) <= 1){
		in += 4 - atoi(&user);
	}

	printf("\n\n\n\n");
	sn += (atoi(&user) - 1);
}

void thx2(){
	char user;
	printf("\n1-No\t2-Very little\t3-To a normal extent\t4-Mostly\t5-Very Much\nYour answer: ");
	user = getch();
	printf("%c", user);
	while (atoi(&user) != 1 && atoi(&user) != 2 && atoi(&user) != 3 && atoi(&user) != 4 && atoi(&user) != 5){
		printf("\n\nYou have enter an invalid number, please enter again\nYour Answer: ");
		user = getch();
		printf("%c", user);
	}
	if ((atoi(&user) - 1) <= 1){
		fe += 4 - atoi(&user);
	}

	printf("\n\n\n\n");
	th += (atoi(&user) - 1);
}
void fex2(){
	char user;
	printf("\n1-No\t2-Very little\t3-To a normal extent\t4-Mostly\t5-Very Much\nYour answer: ");
	user = getch();
	printf("%c", user);
	while (atoi(&user) != 1 && atoi(&user) != 2 && atoi(&user) != 3 && atoi(&user) != 4 && atoi(&user) != 5){
		printf("\n\nYou have enter an invalid number, please enter again\nYour Answer: ");
		user = getch();
		printf("%c", user);
	}
	if ((atoi(&user) - 1) <= 1){
		th += 4 - atoi(&user);
	}

	printf("\n\n\n\n");
	fe += (atoi(&user) - 1);
}
void jux2(){
	char user;
	printf("\n1-No\t2-Very little\t3-To a normal extent\t4-Mostly\t5-Very Much\nYour answer: ");
	user = getch();
	printf("%c", user);
	while (atoi(&user) != 1 && atoi(&user) != 2 && atoi(&user) != 3 && atoi(&user) != 4 && atoi(&user) != 5){
		printf("\n\nYou have enter an invalid number, please enter again\nYour Answer: ");
		user = getch();
		printf("%c", user);
	}
	if ((atoi(&user) - 1) <= 1){
		pe += 4 - atoi(&user);
	}

	printf("\n\n\n\n");
	ju += (atoi(&user) - 1);
}
void pex2(){
	char user;
	printf("\n1-No\t2-Very little\t3-To a normal extent\t4-Mostly\t5-Very Much\nYour answer: ");
	user = getch();
	printf("%c", user);
	while (atoi(&user) != 1 && atoi(&user) != 2 && atoi(&user) != 3 && atoi(&user) != 4 && atoi(&user) != 5){
		printf("\n\nYou have enter an invalid number, please enter again\nYour Answer: ");
		user = getch();
		printf("%c", user);
	}
	if ((atoi(&user) - 1) <= 1){
		ju += 4 - atoi(&user);
	}

	printf("\n\n\n\n");
	pe += (atoi(&user) - 1);
}