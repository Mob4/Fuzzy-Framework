#ifndef BINARYEXPRESSIONMODEL_H
#define BINARYEXPRESSIONMODEL_H

#include "NullExpressionException.h"

namespace core
{
	template <class T>
	class BinaryExpressionModel : public BinaryExpression<T>, public Expression<T>
	{
	public:
		BinaryExpressionModel() {};
		BinaryExpressionModel(BinaryExpression<T>* operateur, Expression<T>* left, Expression<T>* right) : operateur(operateur), left(left), right(right) {};
		virtual ~BinaryExpressionModel() {};

		virtual T Evaluate() const;
		virtual T Evaluate(Expression<T>*, Expression<T>*) const;
	private:

		BinaryExpression<T>* operateur;
		Expression<T>* left;
		Expression<T>* right;
	};

}
#endif