#include <iostream>
using namespace std;

int main(){
    int resp1,resp2,resp3,resp4,resp5,resp6,resp7,resp8,resp9,resp10,resp11,suma;
    string name;
    string matriz[4];
    do {
        
        cout<<" Este es un test donde podras conocer los rasgos mas importantes que caracterizan tu personalidad a traves de una sencilla evaluacion de tu compartamiento.\n ";
        cout<<"Ademas podras comprobar si existen algun tipo de desorden que te impida ser una persona equilibrada emocionalmente.\n "<<endl;
        
        cout<<"Cual es tu nombre?: "<<endl;
        cin>>name;
        
        cout<<"\n1. Cuando te sientes mejor? \n 1- Por la mañana\n  2- Por la tarde\n  3- Por la noche\n R: ";
        cin>> resp1;
        
        cout<<"\n2. Por lo general caminas: \n 1- Bastante rapido, con pasos largos\n  2- Bastante rapido, con pasos cortos y rapidos\n  3- Rapido, cabeza alta, mirando de frente al mundo\n  4- Menos rapido, cabizbajo\n  5- Muy lentamente\n R: ";
        cin>> resp2;
        
        cout<<"\n3. Cuando hablas con personas, generalmente: \n 1- Tienes los brazos cruzados\n  2- Tienes las manos juntas\n  3- Tienes una o ambas manos en las caderas\n  4- Tocas o empujas la persona con quien estás hablando\n  5- Juegas con tu oreja, tocas tu mentón o acaricias tu pelo\n R: ";
        cin>> resp3;
        
        cout<<"\n4. Cuando te relajas, te sientas con: \n 1- Las rodillas dobladas y las piernas juntas\n  2- Las piernas cruzadas\n  3- Las piernas extendidas o rectas\n  4- Una pierna doblada echada hacia atras\n R: ";
        cin>> resp4;
        
        cout<<"\n5. Cuando algo realmente te divierte, reaccionas con: \n 1- Una fuerte carcajada\n  2- Una risa, pero no muy fuerte\n  3- Una sonrisa silenciosa\n  4- Una sonrisa timida\n R: ";
        cin>> resp5;
        
        cout<<"\n6. Cuando vas a una fiesta o una reunion: \n 1- Haces una entrada ruidosa para que todo mundo te vea\n  2- Haces una entrada discreta, buscando alrededor de ti un conocido\n  3- Haces una entrada muy discreta, tratando de pasar desapercibido\n R: ";
        cin>> resp6;
        
        cout<<"\n7. Estas trabajando muy duro, muy concentrando y te interrumpen. ¿Como reaccionas? \n 1- Agradeces el descanso\n  2- Te sientes extremadamente irritado\n  3- Alternas entre estos dos extremos\n R: ";
        cin>> resp7;
        
        cout<<"\n8. ¿Cuales de estos colores te gustan mas? \n 1- Rojo o naranja\n  2- Negro\n  3- Amarillo o azul claro\n  4- Verde\n  5- Azul oscuro o purpura\n  6- Blanco\n  7- Marron o gris\n R: ";
        cin>> resp8;
        
        cout<<"\n9. Cuando estas en la cama por la noche, en esos ultimos momentos justo antes de dormir, te encuentras: \n 1- Estirado sobre la espalda\n  2- Estirado cara boca abajo\n  3- De lado, ligeramente curvado\n  4- Con la cabeza en un brazo\n  5- Con la cabeza tapada con las sabanas\n R: ";
        cin>> resp9;
        
        cout<<"\n10. A menudo sueñas con estas: \n 1- Cayendo\n  2- Luchando o peleando\n  3-Buscando a alguien o algo\n  4- Volando o flotando\n  5- Generalmente duermes sin soñar\n  6- Tus sueños son siempre agradables\n R: ";
        cin>> resp10;
        
        suma = resp1 + resp2 + resp3 + resp4 + resp5 + resp6 + resp7 + resp8 + resp9 + resp10;
        
        //Comentarios//
        matriz[0]= "Los demas te ven con una personalidad apasionante, altamente volatil, más bien impulsiva; un lider natural, que toma decisiones rapidas, aunque no siempre las correctas. Te consideran valiente e intrepido a la hora de probar algo por primera vez; alguien que aprovecha las oportunidades y aprecia la aventura. Les gusta estar en tu compañia debido a las emociones positivas que irradias. Te recomendamos que pienses un poco mas antes de actuar, asi tomarás mejores decisiones y evitaras errores comunes.";
        matriz[1]= "Los demas te ven como una persona dinamica, alegre, encantadora, divertida, practica y siempre interesante; alguien que es constantemente el centro de atencion, pero lo suficientemente bien equilibrado para no tomarse en serio. Tambien te ven como una persona agradable, considerada, y comprensiva; alguien que siempre les va animar y ayudar. Te recomendamos actuar con humildad siempre, siempre brilla pero sin afectar a los demás.";
        matriz[2]= "Tus amigos te ven como una persona concienzuda y quisquillosa. Te consideran una persona muy cautelosa, extremadamente cuidadosa, que avanza lentamente pero con constancia. Realmente les sorprenderias si nunca hicieras algo impulsivo o bajo la emocion del momento. Ya que habitualmente examinas todo cuidadosamente, desde todos los angulos y, a continuacion, por lo general decides en contra de ello. Piensan que esta reaccion es causada en parte por tu naturaleza cuidadosa. Tendrias que buscar la felicidad en la vida. La vida es corta, si te pasas el dia focalizado en detalles, pierdes muchas situaciones de disfrute. ";
        matriz[3]= "Los demas te ven como una persona razonable, cautelosa, cuidadosa y practica. Te consideran un persona inteligente, agradecida, con talento pero modesta... No una persona que hace amigos demasiado rapidamente o facilmente, pero alguien que es extremadamente leal a sus amigos y que espera la misma lealtad a cambio. Aquellos que realmente llegan a conocerte, se dan cuenta que tardas mucho en otorgar confianza a tus amigos. Si la amistad se rompe te cuesta mucho superar la situacion. Te recomendamos no guardar rencor, aprender a perdonar es importante. ";
        
        cout<<"\n "<<name<<","<<endl;
        
        if(suma == 10 || suma <= 19 ){
            cout<<"\n "<<matriz[0]<<endl;
        }
        else if(suma == 20 || suma <= 29){
            cout<<"\n "<<matriz[1]<<endl;
        }
        else if(suma == 30 || suma <= 39){
            cout<<"\n "<<matriz[2]<<endl;
        }
        else if(suma == 40 || suma <= 50){
            cout<<"\n "<<matriz[3]<<endl;
        }
        
        
        cout<<"\nDesea repetir el test? \n 1- Si\n  2- No\n "<<endl;
        cin>> resp11;
    }
    
    while (resp11 == 1);
    
    return 0;
}
