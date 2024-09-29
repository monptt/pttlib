#pragma once
#include "Mapping.h"

/// <summary>
/// P“™Ê‘œ
/// </summary>
/// <typeparam name="Domain"></typeparam>
template<class Domain>
class IdentityMapping :
	public Mapping<Domain, Domain>
{
public:
	IdentityMapping() : Mapping<Domain, Domain>(
		[](Domain x) {
			return x;
		}
	) {};
};

