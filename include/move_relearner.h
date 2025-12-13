#ifndef GUARD_MOVE_RELEARNER_H
#define GUARD_MOVE_RELEARNER_H

void TeachMoveRelearnerMove(void);
void TeachSignatureMove(void);
void MoveRelearnerShowHideHearts(s32 move);
void MoveRelearnerShowHideCategoryIcon(s32);
void CB2_InitLearnMove(void);
void CB2_InitLearnSignatureMove(void);

extern u8 gOriginSummaryScreenPage;

#endif //GUARD_MOVE_RELEARNER_H
