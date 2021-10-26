#ifndef OBJ_DASHLIFT_H
#define OBJ_DASHLIFT_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    uint16 sfxPulley;
} ObjectDashLift;

// Entity Class
typedef struct {
    RSDK_ENTITY
    //Platform Base
    StateMachine(state);
    StateMachine(stateCollide);
    int32 type;
    Vector2 amplitude;
    int32 length;
    bool32 hasTension;
    int8 frameID;
    uint8 collision;
    Vector2 tileOrigin;
    Vector2 centerPos;
    Vector2 drawPos;
    Vector2 collisionOffset;
    int32 stood;
    int32 collapseDelay;
    int32 stoodAngle;
    uint8 stoodPlayers;
    uint8 pushPlayersL;
    uint8 pushPlayersR;
    Hitbox hitbox;
    Animator animator;
    int32 childCount;
    //Dash Lift
    int32 startOff;
    uint8 activePlayers;
} EntityDashLift;

// Object Struct
extern ObjectDashLift *DashLift;

// Standard Entity Events
void DashLift_Update(void);
void DashLift_LateUpdate(void);
void DashLift_StaticUpdate(void);
void DashLift_Draw(void);
void DashLift_Create(void* data);
void DashLift_StageLoad(void);
void DashLift_EditorDraw(void);
void DashLift_EditorLoad(void);
void DashLift_Serialize(void);

// Extra Entity Functions
void DashLift_CheckOnScreen(void);

void DashLift_State_Setup(void);
void DashLift_State_HandleDash(void);

#endif //!OBJ_DASHLIFT_H
