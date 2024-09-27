#pragma once
#include "../Class.h"

/// <summary>
/// 写像
/// </summary>
/// <typeparam name="Domain">始域</typeparam>
/// <typeparam name="Codomain">終域</typeparam>
template<class Domain, class Codomain>
class Mapping :
	public Class
{
public:
	virtual ~Mapping() {};

	Mapping(Codomain(*mapping)(Domain)) {
		this->mapping = mapping;
	};

	Codomain Map(Domain x) {
		return mapping(x);
	};

private:
	// 関数ポインタとして実装
	Codomain(*mapping)(Domain);
};

