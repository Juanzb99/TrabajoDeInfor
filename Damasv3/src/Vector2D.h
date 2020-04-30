#pragma once
class Vector2D
{
public: //Todo public porque se considera una clase b�sica

	//ATRIBUTOS
	float x;
	float y;

	//M�TODOS
	Vector2D(float xv = 0, float yv = 0);
	virtual ~Vector2D();

	float modulo();
	float argumento();
	Vector2D Unitario();
	Vector2D operator - (Vector2D&);		//paso de par�metro por referencia en vez de por valor por eficiencia (paso por referencia es m�s r�pido que por valor)
	Vector2D operator + (Vector2D&);
	float operator * (Vector2D&);		//producto escalar
	Vector2D operator * (float f);			//productor por un escalar

};

