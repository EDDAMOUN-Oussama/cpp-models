#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

typedef struct s_FloorNode
{
    AMateria* materia;
    struct s_FloorNode* next;
} t_FloorNode;

class AMateria;

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* inventory[4];
        t_FloorNode* floorHead;
        int size_floor;
        void clearInventory();
        void copyInventoryFrom(const Character& other);
        void free_floorHead();
        
    public:
        Character();
        Character(std::string const & name);
        Character(const Character &other);
        Character& operator=(const Character &other);
        virtual ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif