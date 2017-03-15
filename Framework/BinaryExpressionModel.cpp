#include"BinaryExpressionModel.h"



template <class T>
T BinaryExpressionModel<T>::Evaluate(Expression<T>* left, Expression<T>* right) const
{
	if (operateur == NULL)
		throw new NullExpressionException("l'operateur est null");
	return operateur->Evaluate(left, right);
}

template <class T>
T BinaryExpressionModel<T>::Evaluate() const
{
	if (left == NULL)
		throw new NullExpressionException("left est null");

	if (right == NULL)
		throw new NullExpressionException("right est null");
	
	return Evaluate(left, right);
}



