#ifndef UNARYEXPRESSIONMODEL_H
#define UNARYEXPRESSIONMODEL_H

#include "NullExpressionException.h"

namespace core
{
	template <class T>
	class UnaryExpressionModel : public UnaryExpression<T>, public Expression<T>
	{
	public:
		UnaryExpressionModel() {};
		UnaryExpressionModel(UnaryExpression<T>* operateur, Expression<T>* operande) : operateur(operateur), operande(operande) {};
		virtual ~UnaryExpressionModel() {};

		virtual T Evaluate() const;
		virtual T Evaluate(Expression*) const;

	private:
		UnaryExpression<T>* operateur;
		Expression<T>* operande;
	};
}
#endif