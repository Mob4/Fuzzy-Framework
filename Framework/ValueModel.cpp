#include"ValueModel.h"


template <class T>
void ValueModel<T>::SetValue(const T& v)
{
	this->v = v;
}

template <class T>
T ValueModel<T>::Evaluate() const
{
	return v;
}