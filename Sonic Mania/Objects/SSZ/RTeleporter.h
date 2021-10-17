#ifndef OBJ_RTELEPORTER_H
#define OBJ_RTELEPORTER_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    uint16 aniFrames;
    Hitbox hitbox;
    uint16 field_E;
    uint16 field_10;
    uint16 field_12;
    uint16 sfxExplosion;
    uint16 sfxGoodFuture;
} ObjectRTeleporter;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    StateMachine(stateDraw);
    int32 startY;
    int32 timer;
    Animator animator1;
    Animator animator2;
} EntityRTeleporter;

// Object Struct
extern ObjectRTeleporter *RTeleporter;

// Standard Entity Events
void RTeleporter_Update(void);
void RTeleporter_LateUpdate(void);
void RTeleporter_StaticUpdate(void);
void RTeleporter_Draw(void);
void RTeleporter_Create(void* data);
void RTeleporter_StageLoad(void);
void RTeleporter_EditorDraw(void);
void RTeleporter_EditorLoad(void);
void RTeleporter_Serialize(void);

// Extra Entity Functions
void RTeleporter_State_CheckPlayerCollisions(void);
void RTeleporter_State_Destroyed(void);

void RTeleporter_StateDraw_Active(void);
void RTeleporter_StateDraw_Exploding(void);
void RTeleporter_StateDraw_Destroyed(void);

#endif //!OBJ_RTELEPORTER_H
