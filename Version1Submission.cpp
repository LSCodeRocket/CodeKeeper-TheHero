#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct PlayerStatus {
    int x; int y;
    int health;
    int score;
    int hammer_charges;
    int scythe_charges;
    int bow_charges;
};

enum MapEntityType {
    EXIT, OBSTACLE
};

enum ItemType {
    TREASURE, POTION,
    HAMMER, SCYTHE, BOW
};

struct EnemyStatus {
    int x; int y;
    int health;
    int view_range;
    int attack_range;
    int damage;
};

struct ItemStatus {
    int x; int y;
    ItemType item_type;
    int value;
};

struct EntityList {
    std::vector<EnemyStatus> enemy_vector;
    std::vector<ItemStatus> item_vector;
};

PlayerStatus getFramePlayerData() {

    PlayerStatus player_data;

    std::cin >> player_data.x >> player_data.y >> player_data.health
        >> player_data.score >> player_data.hammer_charges >> player_data.scythe_charges
        >> player_data.bow_charges;

    std::cin.ignore();

    return player_data;

}

void addItemStatus(EntityList& entity_list, int x, int y, int type, int value) {
    ItemStatus item_for_push_back;
    item_for_push_back.item_type = type - 2;
    item_for_push_back.x = x; item_for_push_back.y = y;
    item_for_push_back.value = value;
    entity_list.item_vector.push_back(item_for_push_back);
}

void addEnemyStatus(EntityList& entity_list, int x, int y, int type, int value) {
    EnemyStatus enemy_for_push_back;
    enemy_for_push_back.health = value;
    enemy_for_push_back.x = x; enemy_for_push_back.y = y;
    enemy_for_push_back.value = value;
    entity_list.enemy_vector.push_back(enemy_for_push_back);
}
void pushBackEntity(EntityList& entity_list, int x, int y, int type, int value) {
    if (type >= 2 && type <= 6) {
        addItemStatus(entity_list, x, y, type, value);
    }

}

EntityList initializeEntityList()
{
    EntityList entity_list;
    entity_list.enemy_vector = std::vector <EnemyStatus>();
    entity_list.item_vector = std::vector <ItemStatus>();
    return entity_list;
}

EntityList getVisibleEntityData() {

    EntityList visible_entity_list = initializeEntityList();

    int visible_entities; // the number of visible entities
    std::cin >> visible_entities; cin.ignore();
    for (int i = 0; i < visible_entities; i++) {
        int ex; // x position of the entity
        int ey; // y position of the entity
        int etype; // the type of the entity
        int evalue; // value associated with the entity

        std::cin >> ex >> ey >> etype >> evalue; std::cin.ignore();
        pushBackEntity(entity_list);
    }
}
int main()
{

    while (1) {
        PlayerStatus player_data = getFramePlayerData();

        

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        std::cout << "MOVE 6 8 Let's go!" << std::endl; // MOVE x y [message] | ATTACK weapon x y [message]
    }
}