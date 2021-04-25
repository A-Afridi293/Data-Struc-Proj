//
//  Actor.h
//  AFRIDI2421PROJECT2
//
//  Created by ahmad afridi on 5/1/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#ifndef Actor_h
#define Actor_h
class actor
{
private:
    
public:
    void setActorTree();
    actorData addRecord();
    void showMenu();
    string modifyRecord();
    void deleteRecord();
    bool findRecord(BSTree<actorData, string>& actorTree);
    void findPartialRecord(BSTree<actorData, string>& actorTree);
    void sortRecord();
    string exportAct();
    string findActor();
    
    
};

#endif /* Actor_h */
