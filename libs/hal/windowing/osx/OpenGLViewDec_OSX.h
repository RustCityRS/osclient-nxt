// libs/hal/windowing/osx/OpenGLViewDec_OSX.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.windowing

@interface OpenGLViewBacking : NSObject
- (id)handleInput:(id)arg1;
- (id)mouseDown:(id)arg1;
- (id)rightMouseDown:(id)arg1;
- (id)otherMouseDown:(id)arg1;
- (id)mouseUp:(id)arg1;
- (id)rightMouseUp:(id)arg1;
- (id)otherMouseUp:(id)arg1;
- (id)mouseMoved:(id)arg1;
- (id)mouseDragged:(id)arg1;
- (id)otherMouseDragged:(id)arg1;
- (id)rightMouseDragged:(id)arg1;
- (id)scrollWheel:(id)arg1;
- (id)cancelOperation:(id)arg1;
- (id)performKeyEquivalent:(id)arg1;
- (id)moveUp:(id)arg1;
- (id)moveDown:(id)arg1;
- (id)moveLeft:(id)arg1;
- (id)moveRight:(id)arg1;
- (id)deleteBackward:(id)arg1;
- (id)deleteForward:(id)arg1;
- (id)insertNewline:(id)arg1;
- (id)insertTab:(id)arg1;
- (id)keyDown:(id)arg1;
- (id)handleKeyDown:(id)arg1;
- (id)keyUp:(id)arg1;
- (id)flagsChanged:(id)arg1;
- (id)eventToKey:(id)arg1;
- (id)insertText:(id)arg1 replacementRange:(id)arg2;
- (id)setMarkedText:(id)arg1 selectedRange:(id)arg2 replacementRange:(id)arg3;
- (id)unmarkText;
- (id)selectedRange;
- (id)markedRange;
- (id)hasMarkedText;
- (id)attributedSubstringForProposedRange:(id)arg1 actualRange:(id)arg2;
- (id)validAttributesForMarkedText;
- (id)firstRectForCharacterRange:(id)arg1 actualRange:(id)arg2;
- (id)characterIndexForPoint:(id)arg1;
@end

@implementation OpenGLViewBacking

// 0x1003a2a80, 64 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking handleInput:]
/* Function Stack Size: 20 bytes */

void OpenGLViewBacking::handleInput_(ID param_1, SEL param_2, float param_3) {
    Input* this;

    this = (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer,
                                            std::default_delete<jag::LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>**)(param_1 + m_JagOpenGLView))
               ->data();
    if (this != (Input*)0) {
        Update(param_3);
    }
}

// 0x1003a2ac0, 192 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking mouseDown:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::mouseDown_(ID param_1, SEL param_2, ID param_3) {
    undefined8 uVar1;
    Input* this;
    double in_XMM1_Qa;
    undefined local_50[24];
    double local_38;
    double local_30;
    double local_28;

    uVar1 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    (*(code*)PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    local_28 = (double)(*(code*)PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    local_30 = in_XMM1_Qa;
    this = (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer,
                                            std::default_delete<jag::LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>**)(param_1 + m_JagOpenGLView))
               ->data();
    if (this != (Input*)0) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        OnLMouseDown((float)local_28, (float)(local_38 - local_30));
    }
    (*(code*)PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a2b80, 192 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking rightMouseDown:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::rightMouseDown_(ID param_1, SEL param_2, ID param_3) {
    undefined8 uVar1;
    Input* this;
    double in_XMM1_Qa;
    undefined local_50[24];
    double local_38;
    double local_30;
    double local_28;

    uVar1 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    (*(code*)PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    local_28 = (double)(*(code*)PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    local_30 = in_XMM1_Qa;
    this = (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer,
                                            std::default_delete<jag::LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>**)(param_1 + m_JagOpenGLView))
               ->data();
    if (this != (Input*)0) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        OnRMouseDown((float)local_28, (float)(local_38 - local_30));
    }
    (*(code*)PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a2c40, 192 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking otherMouseDown:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::otherMouseDown_(ID param_1, SEL param_2, ID param_3) {
    undefined8 uVar1;
    Input* this;
    double in_XMM1_Qa;
    undefined local_50[24];
    double local_38;
    double local_30;
    double local_28;

    uVar1 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    (*(code*)PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    local_28 = (double)(*(code*)PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    local_30 = in_XMM1_Qa;
    this = (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer,
                                            std::default_delete<jag::LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>**)(param_1 + m_JagOpenGLView))
               ->data();
    if (this != (Input*)0) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        OnMMouseDown((float)local_28, (float)(local_38 - local_30));
    }
    (*(code*)PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a2d00, 192 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking mouseUp:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::mouseUp_(ID param_1, SEL param_2, ID param_3) {
    undefined8 uVar1;
    Input* this;
    double in_XMM1_Qa;
    undefined local_50[24];
    double local_38;
    double local_30;
    double local_28;

    uVar1 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    (*(code*)PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    local_28 = (double)(*(code*)PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    local_30 = in_XMM1_Qa;
    this = (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer,
                                            std::default_delete<jag::LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>**)(param_1 + m_JagOpenGLView))
               ->data();
    if (this != (Input*)0) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        OnLMouseUp((float)local_28, (float)(local_38 - local_30));
    }
    (*(code*)PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a2dc0, 192 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking rightMouseUp:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::rightMouseUp_(ID param_1, SEL param_2, ID param_3) {
    undefined8 uVar1;
    Input* this;
    double in_XMM1_Qa;
    undefined local_50[24];
    double local_38;
    double local_30;
    double local_28;

    uVar1 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    (*(code*)PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    local_28 = (double)(*(code*)PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    local_30 = in_XMM1_Qa;
    this = (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer,
                                            std::default_delete<jag::LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>**)(param_1 + m_JagOpenGLView))
               ->data();
    if (this != (Input*)0) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        OnRMouseUp((float)local_28, (float)(local_38 - local_30));
    }
    (*(code*)PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a2e80, 192 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking otherMouseUp:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::otherMouseUp_(ID param_1, SEL param_2, ID param_3) {
    undefined8 uVar1;
    Input* this;
    double in_XMM1_Qa;
    undefined local_50[24];
    double local_38;
    double local_30;
    double local_28;

    uVar1 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    (*(code*)PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    local_28 = (double)(*(code*)PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    local_30 = in_XMM1_Qa;
    this = (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer,
                                            std::default_delete<jag::LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>**)(param_1 + m_JagOpenGLView))
               ->data();
    if (this != (Input*)0) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        OnMMouseUp((float)local_28, (float)(local_38 - local_30));
    }
    (*(code*)PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a2f40, 192 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking mouseMoved:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::mouseMoved_(ID param_1, SEL param_2, ID param_3) {
    undefined8 uVar1;
    Input* this;
    double in_XMM1_Qa;
    undefined local_50[24];
    double local_38;
    double local_30;
    double local_28;

    uVar1 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    (*(code*)PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    local_28 = (double)(*(code*)PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    local_30 = in_XMM1_Qa;
    this = (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer,
                                            std::default_delete<jag::LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>**)(param_1 + m_JagOpenGLView))
               ->data();
    if (this != (Input*)0) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        OnMouseMove((float)local_28, (float)(local_38 - local_30));
    }
    (*(code*)PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a3000, 32 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking mouseDragged:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::mouseDragged_(ID param_1, SEL param_2, ID param_3) {
    mouseMoved_(param_1, "mouseMoved:", param_3);
}

// 0x1003a3020, 32 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking otherMouseDragged:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::otherMouseDragged_(ID param_1, SEL param_2, ID param_3) {
    mouseMoved_(param_1, "mouseMoved:", param_3);
}

// 0x1003a3040, 32 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking rightMouseDragged:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::rightMouseDragged_(ID param_1, SEL param_2, ID param_3) {
    mouseMoved_(param_1, "mouseMoved:", param_3);
}

// 0x1003a3060, 256 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking scrollWheel:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::scrollWheel_(ID param_1, SEL param_2, ID param_3) {
    undefined8 uVar1;
    Input* this;
    double dVar2;
    double dVar3;
    float fVar4;

    uVar1 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    dVar2 = (double)(*(code*)PTR__objc_msgSend_100ee9e50)(uVar1, "scrollingDeltaX");
    dVar3 = (double)(*(code*)PTR__objc_msgSend_100ee9e50)(uVar1, "scrollingDeltaY");
    this = (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer,
                                            std::default_delete<jag::LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>**)(param_1 + m_JagOpenGLView))
               ->data();
    if (this != (Input*)0) {
        fVar4 = (float)dVar3;
        if ((fVar4 <= 0.0) || (8.0 <= fVar4)) {
            fVar4 = (float)(~-(uint)(fVar4 < 0.0) & (uint)(fVar4 * 0.125) |
                            (~-(uint)(-8.0 < fVar4) & (uint)(fVar4 * 0.125) | -(uint)(-8.0 < fVar4) & 3212836864) &
                                -(uint)(fVar4 < 0.0));
        } else {
            fVar4 = 1.0;
        }
        OnMouseWheel((float)dVar2 * 0.125, fVar4);
    }
    (*(code*)PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a3160, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking cancelOperation:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::cancelOperation_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3170, 176 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking performKeyEquivalent:]
/* Function Stack Size: 24 bytes */

char OpenGLViewBacking::performKeyEquivalent_(ID param_1, SEL param_2, ID param_3) {
    undefined* puVar1;
    ID IVar3;
    undefined8 uVar4;
    long lVar5;

    IVar3 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    uVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(*(undefined8*)PTR__NSApp_100ee4008, "mainMenu");
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    if (lVar5 != 0) {
        if ((*(code*)PTR__objc_msgSend_100ee9e50)(lVar5, "performKeyEquivalent:", IVar3) != '\0')
            goto LAB_1003a31da;
    }
    handleKeyDown_(param_1, "handleKeyDown:", IVar3);
LAB_1003a31da:
    puVar1 = PTR__objc_release_100ee9e60;
    (*(code*)PTR__objc_release_100ee9e60)(lVar5);
    (*(code*)puVar1)(IVar3);
    return '\x01';
}

// 0x1003a3220, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking moveUp:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::moveUp_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3230, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking moveDown:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::moveDown_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3240, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking moveLeft:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::moveLeft_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3250, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking moveRight:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::moveRight_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3260, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking deleteBackward:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::deleteBackward_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3270, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking deleteForward:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::deleteForward_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3280, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking insertNewline:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::insertNewline_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3290, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking insertTab:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::insertTab_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a32a0, 192 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking keyDown:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::keyDown_(ID param_1, SEL param_2, ID param_3) {
    ID IVar2;
    ID IVar3;
    undefined8 uVar4;

    IVar2 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    if ((*(code*)PTR__objc_msgSend_100ee9e50)(IVar2, "isARepeat") == '\0') {
        IVar3 = NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray, "arrayWithObject:", IVar2);
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        (*(code*)PTR__objc_msgSend_100ee9e50)(param_1, "interpretKeyEvents:", uVar4);
        (*(code*)PTR__objc_release_100ee9e60)(uVar4);
    }
    handleKeyDown_(param_1, "handleKeyDown:", IVar2);
    (*(code*)PTR__objc_release_100ee9e60)(IVar2);
}

// 0x1003a3360, 400 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking handleKeyDown:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::handleKeyDown_(ID param_1, SEL param_2, ID param_3) {
    undefined* puVar1;
    long lVar2;
    unsigned short uVar3;
    short sVar4;
    ID IVar5;
    long* plVar6;
    undefined8 uVar7;
    unsigned short uVar9;
    ulong uVar10;

    IVar5 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    plVar6 = (long*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer,
                                             std::default_delete<jag::LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>**)(param_1 + m_JagOpenGLView))
                 ->data();
    if (plVar6 != (long*)0) {
        uVar3 = eventToKey_(param_1, "eventToKey:", IVar5);
        if ((uVar3 == 50) || (uVar3 == 10)) {
            (**(code**)(*plVar6 + 16))(plVar6, 7331);
        }
        uVar9 = 36;
        if (uVar3 != 76) {
            uVar9 = uVar3;
        }
        (**(code**)(*plVar6 + 16))(plVar6, uVar9);
        if (uVar9 == 51) {
            (**(code**)(*plVar6 + 32))(plVar6, 8);
        } else {
            uVar7 = (*(code*)PTR__objc_msgSend_100ee9e50)(IVar5, "characters");
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
            lVar2 = m_commandDown;
            puVar1 = PTR__objc_msgSend_100ee9e50;
            uVar10 = 0;
            while (true) {
                if ((*(code*)puVar1)(uVar7, "length") <= uVar10)
                    break;
                sVar4 = (*(code*)puVar1)(uVar7, "characterAtIndex:", uVar10);
                if ((511 < (ushort)(sVar4 + 2304U)) && (*(char*)(param_1 + lVar2) == '\0')) {
                    (**(code**)(*plVar6 + 32))(plVar6, sVar4);
                }
                uVar10 = uVar10 + 1;
            }
            (*(code*)PTR__objc_release_100ee9e60)(uVar7);
        }
    }
    (*(code*)PTR__objc_release_100ee9e60)(IVar5);
}

// 0x1003a34f0, 160 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking keyUp:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::keyUp_(ID param_1, SEL param_2, ID param_3) {
    unsigned short uVar1;
    ID IVar2;
    long* plVar3;

    IVar2 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    plVar3 = (long*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer,
                                             std::default_delete<jag::LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>**)(param_1 + m_JagOpenGLView))
                 ->data();
    if (plVar3 != (long*)0) {
        uVar1 = eventToKey_(param_1, "eventToKey:", IVar2);
        if ((uVar1 == 50) || (uVar1 == 10)) {
            (**(code**)(*plVar3 + 24))(plVar3, 7331);
        }
        (**(code**)(*plVar3 + 24))(plVar3, uVar1);
    }
    (*(code*)PTR__objc_release_100ee9e60)(IVar2);
}

// 0x1003a3590, 560 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking flagsChanged:]
/* Function Stack Size: 24 bytes */

void OpenGLViewBacking::flagsChanged_(ID param_1, SEL param_2, ID param_3) {
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    ID IVar6;
    long* plVar7;
    uint uVar8;

    IVar6 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    plVar7 = (long*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer,
                                             std::default_delete<jag::LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>**)(param_1 + m_JagOpenGLView))
                 ->data();
    if (plVar7 != (long*)0) {
        eventToKey_(param_1, "eventToKey:", IVar6);
        uVar5 = (*(code*)PTR__objc_msgSend_100ee9e50)(IVar6, "modifierFlags");
        uVar8 = uVar5 & 65536;
        if (uVar8 >> 16 != (uint) * (byte*)(param_1 + m_capsDown)) {
            if (uVar8 == 0) {
                (**(code**)(*plVar7 + 24))(plVar7, 57);
            } else {
                (**(code**)(*plVar7 + 16))(plVar7, 57);
            }
        }
        uVar1 = (uVar5 & 131072) >> 17;
        if (uVar1 != *(byte*)(param_1 + m_shiftDown)) {
            if ((uVar5 & 131072) == 0) {
                (**(code**)(*plVar7 + 24))(plVar7, 56);
            } else {
                (**(code**)(*plVar7 + 16))(plVar7, 56);
            }
        }
        uVar2 = (uVar5 & 262144) >> 18;
        if (uVar2 != *(byte*)(param_1 + m_controlDown)) {
            if ((uVar5 & 262144) == 0) {
                (**(code**)(*plVar7 + 24))(plVar7, 59);
            } else {
                (**(code**)(*plVar7 + 16))(plVar7, 59);
            }
        }
        uVar3 = (uVar5 & 524288) >> 19;
        if (uVar3 != *(byte*)(param_1 + m_altDown)) {
            if ((uVar5 & 524288) == 0) {
                (**(code**)(*plVar7 + 24))(plVar7, 58);
            } else {
                (**(code**)(*plVar7 + 16))(plVar7, 58);
            }
        }
        uVar4 = (uVar5 & 1048576) >> 20;
        if (uVar4 != *(byte*)(param_1 + m_commandDown)) {
            if ((uVar5 & 1048576) == 0) {
                (**(code**)(*plVar7 + 24))(plVar7, 55);
            } else {
                (**(code**)(*plVar7 + 16))(plVar7, 55);
            }
        }
        *(char*)(param_1 + m_capsDown) = (char)(uVar8 >> 16);
        *(char*)(param_1 + m_shiftDown) = (char)uVar1;
        *(char*)(param_1 + m_controlDown) = (char)uVar2;
        *(char*)(param_1 + m_altDown) = (char)uVar3;
        *(char*)(param_1 + m_commandDown) = (char)uVar4;
    }
    (*(code*)PTR__objc_release_100ee9e60)(IVar6);
}

// 0x1003a37c0, 256 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking eventToKey:]
/* Function Stack Size: 24 bytes */

unsigned short OpenGLViewBacking::eventToKey_(ID param_1, SEL param_2, ID param_3) {
    bool bVar1;
    unsigned short uVar2;
    undefined8 uVar3;
    long lVar4;
    undefined8 uVar5;
    unsigned short unaff_BX;

    uVar3 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    uVar2 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "keyCode");
    lVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "type");
    if (lVar4 != 12) {
        uVar5 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "characters");
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        lVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar5, "length");
        if (lVar4 == 1) {
            unaff_BX = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar5, "characterAtIndex:", 0);
            if (511 < (ushort)(unaff_BX + 2304))
                goto LAB_1003a385e;
            bVar1 = false;
        } else {
        LAB_1003a385e:
            bVar1 = true;
        }
        (*(code*)PTR__objc_release_100ee9e60)(uVar5);
        if (!bVar1)
            goto LAB_1003a3872;
    }
    unaff_BX = uVar2;
LAB_1003a3872:
    (*(code*)PTR__objc_release_100ee9e60)(uVar3);
    return unaff_BX;
}

// 0x1003a38c0, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking insertText:replacementRange:]
/* Function Stack Size: 40 bytes */

void OpenGLViewBacking::insertText_replacementRange_(ID param_1, SEL param_2, ID param_3, _NSRange param_4) {}

// 0x1003a38d0, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking setMarkedText:selectedRange:replacementRange:]
/* Function Stack Size: 56 bytes */

void OpenGLViewBacking::setMarkedText_selectedRange_replacementRange_(ID param_1, SEL param_2, ID param_3,
                                                                      _NSRange param_4, _NSRange param_5) {}

// 0x1003a38e0, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking unmarkText]
/* Function Stack Size: 16 bytes */

void OpenGLViewBacking::unmarkText(ID param_1, SEL param_2) {}

// 0x1003a38f0, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking selectedRange]
/* Function Stack Size: 16 bytes */

_NSRange OpenGLViewBacking::selectedRange(ID param_1, SEL param_2) {
    return (_NSRange)ZEXT816(0);
}

// 0x1003a3900, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking markedRange]
/* Function Stack Size: 16 bytes */

_NSRange OpenGLViewBacking::markedRange(ID param_1, SEL param_2) {
    return (_NSRange)ZEXT816(0);
}

// 0x1003a3910, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking hasMarkedText]
/* Function Stack Size: 16 bytes */

char OpenGLViewBacking::hasMarkedText(ID param_1, SEL param_2) {
    return '\0';
}

// 0x1003a3920, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking attributedSubstringForProposedRange:actualRange:]
/* Function Stack Size: 40 bytes */

ID OpenGLViewBacking::attributedSubstringForProposedRange_actualRange_(ID param_1, SEL param_2, _NSRange param_3,
                                                                       _NSRange* param_4) {
    return 0;
}

// 0x1003a3930, 48 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking validAttributesForMarkedText]
/* Function Stack Size: 16 bytes */

ID OpenGLViewBacking::validAttributesForMarkedText(ID param_1, SEL param_2) {
    ID IVar1;
    undefined8 uVar2;

    IVar1 = NSArray::array((ID)&_OBJC_CLASS___NSArray, "array");
    uVar2 = _objc_retainAutoreleasedReturnValue(IVar1);
    IVar1 = _objc_autoreleaseReturnValue(uVar2);
    return IVar1;
}

// 0x1003a3960, 32 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking firstRectForCharacterRange:actualRange:]
/* Function Stack Size: 40 bytes */

CGRect* OpenGLViewBacking::firstRectForCharacterRange_actualRange_(CGRect* __return_storage_ptr__, ID param_1,
                                                                   SEL param_2, _NSRange param_3, _NSRange* param_4) {
    _objc_msgSend_stret((undefined*)__return_storage_ptr__, param_1, "frame", param_3.field_0, param_3.field_8);
    return __return_storage_ptr__;
}

// 0x1003a3980, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking characterIndexForPoint:]
/* Function Stack Size: 32 bytes */

unsigned long long OpenGLViewBacking::characterIndexForPoint_(ID param_1, SEL param_2, CGPoint param_3) {
    return 0;
}

@end
