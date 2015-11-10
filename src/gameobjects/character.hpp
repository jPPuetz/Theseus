/**
 * @autor Arwed Mett
 */
#ifndef _THESEUS_GAME_OBJECTS_CHARACTER_H
#define _THESEUS_GAME_OBJECTS_CHARACTER_H

#include "../engine/gameobject.hpp"
#include "../engine/components/update.hpp"
#include "../engine/components/animation.hpp"
#include "../engine/components/speed.hpp"
#include "../engine/components/collisionresolver.hpp"
#include <SFML/System.hpp>
#include "../engine/components/positionable.hpp"

namespace theseus
{
namespace gameobjects
{
	class Character
		//: public engine::GameObject
		: public theseus::engine::components::Positionable
		, public virtual engine::components::Animation
		, public virtual engine::components::Speed
		, public virtual engine::components::CollisionResolver
	{
	private:
		// state changes
		sf::Vector2i direction;

		// Speed Settings
		float speedMultiplier;

	public:
		void setDirection(sf::Vector2i direction, bool force_update = false);
		//---- Constructor --------------------------------------------------------------------------------------

		Character();

		//---- Destructor ---------------------------------------------------------------------------------------

		~Character();

		// Speed Multiplier setter
		void setSpeedMultiplier(float value);
	};
}
}

#endif
