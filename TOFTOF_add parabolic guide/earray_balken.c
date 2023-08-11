// January 2010 Generic

// temp is the file which data is (optionally) written to
FILE *data;
data = fopen("temp", "w");

// Variables used only in this file

int i,j;
double xx;

// parabola 1
//a_w=(focus_w+laenge)/((w_in/2)*(w_in/2));
//a_h=(focus_h+laenge)/((h_in/2)*(h_in/2));


// Next 2 loops calculate the shape of the guide. : parabolic geometry


i=0;
for (i=0; i<(nn1); i++){
    xx=laenge_parabel-d6[i];
    dh6[i]=h_in-(h_in-Ah)*((1-(xx/laenge_parabel))*(1-(xx/laenge_parabel)));
    dw6[i]=w_in-(w_in-Aw)*((1-(xx/laenge_parabel))*(1-(xx/laenge_parabel)));
    if (dh6[i]<0.005) dh6[i]=0.005;
    if (dw6[i]<0.005) dw6[i]=0.005;}



// For printing out the calculated values (if desired)


i=0;
for (i=0; i<(nn1); i++)
fprintf(data,"d6[%i] %f\n",i, d6[i]);

i=0;
for (i=0; i<(nn1); i++)
fprintf(data,"l6[%i] %f\n",i, l6[i]);


i=0;
for (i=0; i<(nn1); i++)
fprintf(data,"dh6[%i] %f      dw6[%i] %f\n",i, dh6[i],i,dw6[i]);
//fprintf(data,"%f\t%f\n",h6[i],w6[i]);

