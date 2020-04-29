#pragma once
class Vector2D
{
public: //Todo public porque se considera una clase básica

	//ATRIBUTOS
	float x;
	float y;

	//MÉTODOS
	Vector2D(float xv = 0, float yv = 0);
	virtual ~Vector2D();

	float modulo();
	float argumento();
	Vector2D Unitario();
	Vector2D operator - (Vector2D&);		//paso de parámetro por referencia en vez de por valor por eficiencia (paso por referencia es más rápido que por valor)
	Vector2D operator + (Vector2D&);
	float operator * (Vector2D&);		//producto escalar
	Vector2D operator * (float f);			//productor por un escalar

};

