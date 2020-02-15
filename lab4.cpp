#include "lab4.h" //this get's the header file I 
//provided into your code
//The header will also "glue" or link your cpp and my
//test file together

/*
 * So I'm going to put a lot of comments in here and 
 * you should read them. They are intended to explain
 * what's going on and should help answer some of
 * your questions.
 */

/*
 * So this is the start of a function. I know
 * we haven't covered them yet, so that's why 
 * I put this here.  It's how I will connect
 * with your code.
 */ 
void quadradic()
{
	
	//declare the variables you'll need
	//you'll need at least ones for a, b, and c
	//as well as one for the answer.  You may
	//want to make one for the discriminate too.
	
    double a, b, c, discrim, answer1, answer2;

	//Now that you've read in the values from the file using
	//the variable in and storing them in a, b and c
	//check the discriminate to make sure it's safe
	//or even needed to compute the square root.
	
	cin >> a >> b >> c;
    
    answer1 = (-b + sqrt((pow(b, 2))-4*a*c))/ (2 * a);
    answer2 = (-b - sqrt((pow(b, 2))-4*a*c))/ (2 * a);
    
    // discriminate real and imaginary number
    discrim = (pow(b, 2)-4*a*c);
    
    if (discrim < 0)
    {
        cout << "a = "<< a << endl;
        cout << "b = "<< b << endl;
        cout << "c = "<< c << endl;
        cout << "Two imaginary solutions."<< endl;
        cout <<"x1 = "<< (-b)/(2*a) << " + " << sqrt(-discrim)/(2*a) <<"i"<< endl;
        cout <<"x2 = "<< (-b)/(2*a) << " - " << sqrt(-discrim)/(2*a) <<"i"<< endl;
    }
    else if(discrim > 0)
    {
        cout << "a = "<< a << endl;
        cout << "b = "<< b << endl;
        cout << "c = "<< c << endl;
        cout << "Two real solutions."<< endl;
        cout << "x1 = "<< answer1 << endl;
        cout << "x2 = "<< answer2 << endl;
    }
    else if(discrim == 0)
    {
        cout << "a = "<< a << endl;
        cout << "b = "<< b << endl;
        cout << "c = "<< c << endl;
        cout << "One real solution."<< endl;
        cout << "x = "<< answer1 << endl;
    }
	//Now output the answers. See the sample outputs
	//to make sure your output format matches what is
	//expected.  If it doesn't make the expected
	//format, then it is wrong even if your answers
	//are correct.  Harsh I know.  But make sure
	//you figure that out now in lab and not on the 
	//projects.
	
	
}
