#include"UnaryExpression.h"

namespace core

{
	template <class T>
	T UnaryExpressionModel<T>::Evaluate() const
	{
		if (operande == NULL)
			throw new NullExpressionException("l'operande est null");

		return Evaluate(operande);
	}

	template <class T>
	T UnaryExpressionModel<T>::Evaluate(Expression<T>* o) const
	{
		if (operateur == NULL)
			throw new NullExpressionException("l'operateur est null");

		return operateur->Evaluate(o);
	}
}