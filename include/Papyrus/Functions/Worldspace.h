#pragma once

namespace Papyrus::Worldspace::Helper
{
	bool StoreParents(RE::TESWorldSpace* a_child, std::vector<RE::TESWorldSpace*>* a_vec) 
	{
		auto* parent = a_child->parentWorld;
		if (!parent)
		{
			return true;
		}

		//safety check. Circular worldspaces aren't a thing, but to be sure:
		if (std::find(a_vec->begin(), a_vec->end(), parent) != a_vec->end()) 
		{
			return false;
		}
		a_vec->push_back(parent);
		StoreParents(parent, a_vec);
		return true;
	}
}
namespace Papyrus::Worldspace
{
	inline std::vector<RE::TESWorldSpace*> GetParentWorldspaces(STATIC_ARGS, RE::TESWorldSpace* a_worldspace)
	{
		std::vector<RE::TESWorldSpace*> response{};
		if (!a_worldspace) 
		{
			return response;
		}
		
		if (Helper::StoreParents(a_worldspace, &response)) 
		{
			return response;
		} 
		return std::vector<RE::TESWorldSpace*>{};
	}

	inline void Bind(VM& a_vm) 
	{
		BIND(GetParentWorldspaces);
	}
}
