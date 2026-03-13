#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(): name(""), floorHead(NULL), size_floor(0)
{
    for (int i = 0; i < 4; ++i)
        inventory[i] = 0;
    std::cout << "Default constructor of 'Character' called" << std::endl;
}

Character::Character(std::string const & name): name(name), floorHead(NULL), size_floor(0)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
    std::cout << "Constructor with name of 'Character' called" << std::endl;
}

Character::Character(const Character &other) : name(other.name), floorHead(NULL), size_floor(0)
{
    for (int i = 0; i < 4; ++i)
        inventory[i] = 0;
    copyInventoryFrom(other);
    copyFloorFrom(other);
    std::cout << "Copy constructor of 'Character' called" << std::endl;
}

Character& Character::operator=(const Character& other)
{
    std::cout << "Copy assignment operator of 'Character' called" << std::endl;
    if (this != &other)
    {
        clearInventory();
        free_floorHead();
        name = other.name;
        for (int i = 0; i < 4; ++i)
            inventory[i] = 0;
        copyInventoryFrom(other);
        copyFloorFrom(other);
    }
    return *this;
}

Character::~Character()
{
    std::cout << "Destructor of 'Character' called" << std::endl;
    clearInventory();
    free_floorHead();
}

void Character::clearInventory()
{
    std::cout << "clearInventory() called" << std::endl;

    for (int i = 0; i < 4; ++i)
    {
        delete inventory[i];
        inventory[i] = 0;
    }
}

void Character::copyInventoryFrom(const Character& other)
{
    std::cout << "copyInventoryFrom() called" << std::endl;

    for (int i = 0; i < 4; ++i)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = 0;
    }
}

std::string const & Character::getName() const 
{
    return (name);
}

void Character::equip(AMateria* m)
{
    std::cout << "equip() called" << std::endl;

    if (!m)
        return;

    for (int i = 0; i < 4; ++i)
    {
        if (inventory[i] == 0)
        {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    std::cout << "unequip(" << idx << ") called" << std::endl;

    if (idx < 0 || idx >= 4)
        return;

    if (!inventory[idx])
        return;

    t_FloorNode* node = new t_FloorNode;

    node->materia = inventory[idx];
    node->next = floorHead;

    floorHead = node;
    size_floor++;

    inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    std::cout << "use(" << idx << ") called" << std::endl;

    if (idx < 0 || idx >= 4)
        return;

    if (!inventory[idx])
        return;

    inventory[idx]->use(target);
}

void Character::free_floorHead()
{
    std::cout << "free_floorHead() called" << std::endl;

    t_FloorNode* tmp;

    while (floorHead)
    {
        tmp = floorHead;
        floorHead = floorHead->next;

        delete tmp->materia;
        delete tmp;
    }

    size_floor = 0;
}

void Character::copyFloorFrom(const Character& other)
{
    std::cout << "copyFloorFrom() called" << std::endl;
    if (!other.floorHead)
        return;
    t_FloorNode* current = other.floorHead;
    t_FloorNode* prev = NULL;
    while (current)
    {
        t_FloorNode* node = new t_FloorNode;
        node->materia = current->materia->clone();
        node->next = NULL;
        if (!floorHead)
            floorHead = node;
        else
            prev->next = node;
        prev = node;
        current = current->next;
        size_floor++;
    }
}
