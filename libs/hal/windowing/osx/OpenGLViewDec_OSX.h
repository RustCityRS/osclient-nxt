// libs/hal/windowing/osx/OpenGLViewDec_OSX.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

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

// 0x1003a2a80
void OpenGLViewBacking::handleInput_(ID param_1, SEL param_2, float param_3) {
    Input* input =
        (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer>>**)(param_1 + m_JagOpenGLView))->data();
    if (input != nullptr) {
        input->Update(param_3);
    }
}

// 0x1003a2ac0
void OpenGLViewBacking::mouseDown_(ID param_1, SEL param_2, ID param_3) {
    double in_XMM1_Qa;
    uint8_t local_50[24];
    double local_38;

    uint64_t uVar1 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    double local_28 = (double)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    double local_30 = in_XMM1_Qa;
    Input* input =
        (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer>>**)(param_1 + m_JagOpenGLView))->data();
    if (input != nullptr) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        input->OnLMouseDown((float)local_28, (float)(local_38 - local_30));
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a2b80
void OpenGLViewBacking::rightMouseDown_(ID param_1, SEL param_2, ID param_3) {
    double in_XMM1_Qa;
    uint8_t local_50[24];
    double local_38;

    uint64_t uVar1 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    double local_28 = (double)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    double local_30 = in_XMM1_Qa;
    Input* input =
        (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer>>**)(param_1 + m_JagOpenGLView))->data();
    if (input != nullptr) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        input->OnRMouseDown((float)local_28, (float)(local_38 - local_30));
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a2c40
void OpenGLViewBacking::otherMouseDown_(ID param_1, SEL param_2, ID param_3) {
    double in_XMM1_Qa;
    uint8_t local_50[24];
    double local_38;

    uint64_t uVar1 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    double local_28 = (double)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    double local_30 = in_XMM1_Qa;
    Input* input =
        (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer>>**)(param_1 + m_JagOpenGLView))->data();
    if (input != nullptr) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        input->OnMMouseDown((float)local_28, (float)(local_38 - local_30));
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a2d00
void OpenGLViewBacking::mouseUp_(ID param_1, SEL param_2, ID param_3) {
    double in_XMM1_Qa;
    uint8_t local_50[24];
    double local_38;

    uint64_t uVar1 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    double local_28 = (double)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    double local_30 = in_XMM1_Qa;
    Input* input =
        (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer>>**)(param_1 + m_JagOpenGLView))->data();
    if (input != nullptr) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        input->OnLMouseUp((float)local_28, (float)(local_38 - local_30));
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a2dc0
void OpenGLViewBacking::rightMouseUp_(ID param_1, SEL param_2, ID param_3) {
    double in_XMM1_Qa;
    uint8_t local_50[24];
    double local_38;

    uint64_t uVar1 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    double local_28 = (double)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    double local_30 = in_XMM1_Qa;
    Input* input =
        (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer>>**)(param_1 + m_JagOpenGLView))->data();
    if (input != nullptr) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        input->OnRMouseUp((float)local_28, (float)(local_38 - local_30));
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a2e80
void OpenGLViewBacking::otherMouseUp_(ID param_1, SEL param_2, ID param_3) {
    double in_XMM1_Qa;
    uint8_t local_50[24];
    double local_38;

    uint64_t uVar1 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    double local_28 = (double)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    double local_30 = in_XMM1_Qa;
    Input* input =
        (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer>>**)(param_1 + m_JagOpenGLView))->data();
    if (input != nullptr) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        input->OnMMouseUp((float)local_28, (float)(local_38 - local_30));
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a2f40
void OpenGLViewBacking::mouseMoved_(ID param_1, SEL param_2, ID param_3) {
    double in_XMM1_Qa;
    uint8_t local_50[24];
    double local_38;

    uint64_t uVar1 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar1, "locationInWindow");
    double local_28 = (double)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(param_1, "convertPoint:fromView:", 0);
    double local_30 = in_XMM1_Qa;
    Input* input =
        (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer>>**)(param_1 + m_JagOpenGLView))->data();
    if (input != nullptr) {
        _objc_msgSend_stret(local_50, param_1, "frame");
        input->OnMouseMove((float)local_28, (float)(local_38 - local_30));
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a3000
void OpenGLViewBacking::mouseDragged_(ID param_1, SEL param_2, ID param_3) {
    mouseMoved_(param_1, "mouseMoved:", param_3);
}

// 0x1003a3020
void OpenGLViewBacking::otherMouseDragged_(ID param_1, SEL param_2, ID param_3) {
    mouseMoved_(param_1, "mouseMoved:", param_3);
}

// 0x1003a3040
void OpenGLViewBacking::rightMouseDragged_(ID param_1, SEL param_2, ID param_3) {
    mouseMoved_(param_1, "mouseMoved:", param_3);
}

// 0x1003a3060
void OpenGLViewBacking::scrollWheel_(ID param_1, SEL param_2, ID param_3) {
    float fVar4;

    uint64_t uVar1 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    double dVar2 = (double)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar1, "scrollingDeltaX");
    double dVar3 = (double)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar1, "scrollingDeltaY");
    Input* input =
        (Input*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer>>**)(param_1 + m_JagOpenGLView))->data();
    if (input != nullptr) {
        fVar4 = (float)dVar3;
        if ((fVar4 <= 0.0) || (8.0 <= fVar4)) {
            fVar4 = (float)(~-(unsigned int)(fVar4 < 0.0) & (unsigned int)(fVar4 * 0.125) |
                            (~-(unsigned int)(-8.0 < fVar4) & (unsigned int)(fVar4 * 0.125) |
                             -(unsigned int)(-8.0 < fVar4) & 3212836864) &
                                -(unsigned int)(fVar4 < 0.0));
        } else {
            fVar4 = 1.0;
        }
        input->OnMouseWheel((float)dVar2 * 0.125, fVar4);
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar1);
}

// 0x1003a3160
void OpenGLViewBacking::cancelOperation_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3170
char OpenGLViewBacking::performKeyEquivalent_(ID param_1, SEL param_2, ID param_3) {
    ID IVar3 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    long lVar5 = _objc_retainAutoreleasedReturnValue(
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(*(uint64_t*)PTR__NSApp_100ee4008, "mainMenu"));
    if (lVar5 != 0) {
        if ((*(void (*)(...))PTR__objc_msgSend_100ee9e50)(lVar5, "performKeyEquivalent:", IVar3) != '\0')
            goto LAB_1003a31da;
    }
    handleKeyDown_(param_1, "handleKeyDown:", IVar3);
LAB_1003a31da:
    uint8_t* puVar1 = PTR__objc_release_100ee9e60;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(lVar5);
    (*(void (*)(...))puVar1)(IVar3);
    return '\x01';
}

// 0x1003a3220
void OpenGLViewBacking::moveUp_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3230
void OpenGLViewBacking::moveDown_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3240
void OpenGLViewBacking::moveLeft_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3250
void OpenGLViewBacking::moveRight_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3260
void OpenGLViewBacking::deleteBackward_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3270
void OpenGLViewBacking::deleteForward_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3280
void OpenGLViewBacking::insertNewline_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a3290
void OpenGLViewBacking::insertTab_(ID param_1, SEL param_2, ID param_3) {}

// 0x1003a32a0
void OpenGLViewBacking::keyDown_(ID param_1, SEL param_2, ID param_3) {
    uint64_t uVar4;

    ID IVar2 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    if ((*(void (*)(...))PTR__objc_msgSend_100ee9e50)(IVar2, "isARepeat") == '\0') {
        uVar4 = _objc_retainAutoreleasedReturnValue(
            NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray, "arrayWithObject:", IVar2));
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(param_1, "interpretKeyEvents:", uVar4);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar4);
    }
    handleKeyDown_(param_1, "handleKeyDown:", IVar2);
    (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar2);
}

// 0x1003a3360
void OpenGLViewBacking::handleKeyDown_(ID param_1, SEL param_2, ID param_3) {
    uint8_t* puVar1;
    long lVar2;
    unsigned short uVar3;
    short sVar4;
    uint64_t uVar7;
    unsigned short uVar9;
    unsigned long uVar10;

    ID IVar5 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    long* plVar6 =
        (long*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer>>**)(param_1 + m_JagOpenGLView))->data();
    if (plVar6 != nullptr) {
        uVar3 = eventToKey_(param_1, "eventToKey:", IVar5);
        if ((uVar3 == 50) || (uVar3 == 10)) {
            (**(void (**)(...))(*plVar6 + 16))(plVar6, 7331);
        }
        uVar9 = 36;
        if (uVar3 != 76) {
            uVar9 = uVar3;
        }
        (**(void (**)(...))(*plVar6 + 16))(plVar6, uVar9);
        if (uVar9 == 51) {
            (**(void (**)(...))(*plVar6 + 32))(plVar6, 8);
        } else {
            uVar7 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(IVar5, "characters");
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
            lVar2 = m_commandDown;
            puVar1 = PTR__objc_msgSend_100ee9e50;
            uVar10 = 0;
            while (true) {
                if ((*(void (*)(...))puVar1)(uVar7, "length") <= uVar10)
                    break;
                sVar4 = (*(void (*)(...))puVar1)(uVar7, "characterAtIndex:", uVar10);
                if ((511 < (unsigned short)(sVar4 + 2304U)) && (*(char*)(param_1 + lVar2) == '\0')) {
                    (**(void (**)(...))(*plVar6 + 32))(plVar6, sVar4);
                }
                uVar10 = uVar10 + 1;
            }
            (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar7);
        }
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar5);
}

// 0x1003a34f0
void OpenGLViewBacking::keyUp_(ID param_1, SEL param_2, ID param_3) {
    unsigned short uVar1;

    ID IVar2 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    long* plVar3 =
        (long*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer>>**)(param_1 + m_JagOpenGLView))->data();
    if (plVar3 != nullptr) {
        uVar1 = eventToKey_(param_1, "eventToKey:", IVar2);
        if ((uVar1 == 50) || (uVar1 == 10)) {
            (**(void (**)(...))(*plVar3 + 24))(plVar3, 7331);
        }
        (**(void (**)(...))(*plVar3 + 24))(plVar3, uVar1);
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar2);
}

// 0x1003a3590
void OpenGLViewBacking::flagsChanged_(ID param_1, SEL param_2, ID param_3) {
    unsigned int uVar1;
    unsigned int uVar2;
    unsigned int uVar3;
    unsigned int uVar4;
    unsigned int uVar5;
    unsigned int uVar8;

    ID IVar6 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    long* plVar7 =
        (long*)(*(Array<std::unique_ptr<jag::LoadingScreenScript::AnimLayer>>**)(param_1 + m_JagOpenGLView))->data();
    if (plVar7 != nullptr) {
        eventToKey_(param_1, "eventToKey:", IVar6);
        uVar5 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(IVar6, "modifierFlags");
        uVar8 = uVar5 & 65536;
        if (uVar8 >> 16 != (unsigned int)*(uint8_t*)(param_1 + m_capsDown)) {
            if (uVar8 == 0) {
                (**(void (**)(...))(*plVar7 + 24))(plVar7, 57);
            } else {
                (**(void (**)(...))(*plVar7 + 16))(plVar7, 57);
            }
        }
        uVar1 = (uVar5 & 131072) >> 17;
        if (uVar1 != *(uint8_t*)(param_1 + m_shiftDown)) {
            if ((uVar5 & 131072) == 0) {
                (**(void (**)(...))(*plVar7 + 24))(plVar7, 56);
            } else {
                (**(void (**)(...))(*plVar7 + 16))(plVar7, 56);
            }
        }
        uVar2 = (uVar5 & 262144) >> 18;
        if (uVar2 != *(uint8_t*)(param_1 + m_controlDown)) {
            if ((uVar5 & 262144) == 0) {
                (**(void (**)(...))(*plVar7 + 24))(plVar7, 59);
            } else {
                (**(void (**)(...))(*plVar7 + 16))(plVar7, 59);
            }
        }
        uVar3 = (uVar5 & 524288) >> 19;
        if (uVar3 != *(uint8_t*)(param_1 + m_altDown)) {
            if ((uVar5 & 524288) == 0) {
                (**(void (**)(...))(*plVar7 + 24))(plVar7, 58);
            } else {
                (**(void (**)(...))(*plVar7 + 16))(plVar7, 58);
            }
        }
        uVar4 = (uVar5 & 1048576) >> 20;
        if (uVar4 != *(uint8_t*)(param_1 + m_commandDown)) {
            if ((uVar5 & 1048576) == 0) {
                (**(void (**)(...))(*plVar7 + 24))(plVar7, 55);
            } else {
                (**(void (**)(...))(*plVar7 + 16))(plVar7, 55);
            }
        }
        *(char*)(param_1 + m_capsDown) = (char)(uVar8 >> 16);
        *(char*)(param_1 + m_shiftDown) = (char)uVar1;
        *(char*)(param_1 + m_controlDown) = (char)uVar2;
        *(char*)(param_1 + m_altDown) = (char)uVar3;
        *(char*)(param_1 + m_commandDown) = (char)uVar4;
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar6);
}

// 0x1003a37c0
unsigned short OpenGLViewBacking::eventToKey_(ID param_1, SEL param_2, ID param_3) {
    bool bVar1;
    uint64_t uVar5;
    unsigned short unaff_BX;

    uint64_t uVar3 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    unsigned short uVar2 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3, "keyCode");
    long lVar4 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3, "type");
    if (lVar4 != 12) {
        uVar5 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3, "characters");
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        lVar4 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar5, "length");
        if (lVar4 == 1) {
            unaff_BX = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar5, "characterAtIndex:", 0);
            if (511 < (unsigned short)(unaff_BX + 2304))
                goto LAB_1003a385e;
            bVar1 = false;
        } else {
        LAB_1003a385e:
            bVar1 = true;
        }
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar5);
        if (!bVar1)
            goto LAB_1003a3872;
    }
    unaff_BX = uVar2;
LAB_1003a3872:
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
    return unaff_BX;
}

// 0x1003a38c0
void OpenGLViewBacking::insertText_replacementRange_(ID param_1, SEL param_2, ID param_3, _NSRange param_4) {}

// 0x1003a38d0
void OpenGLViewBacking::setMarkedText_selectedRange_replacementRange_(ID param_1, SEL param_2, ID param_3,
                                                                      _NSRange param_4, _NSRange param_5) {}

// 0x1003a38e0
void OpenGLViewBacking::unmarkText(ID param_1, SEL param_2) {}

// 0x1003a38f0
_NSRange OpenGLViewBacking::selectedRange(ID param_1, SEL param_2) {
    return (_NSRange)(unsigned __int128)0;
}

// 0x1003a3900
_NSRange OpenGLViewBacking::markedRange(ID param_1, SEL param_2) {
    return (_NSRange)(unsigned __int128)0;
}

// 0x1003a3910
char OpenGLViewBacking::hasMarkedText(ID param_1, SEL param_2) {
    return '\0';
}

// 0x1003a3920
ID OpenGLViewBacking::attributedSubstringForProposedRange_actualRange_(ID param_1, SEL param_2, _NSRange param_3,
                                                                       _NSRange* param_4) {
    return 0;
}

// 0x1003a3930
ID OpenGLViewBacking::validAttributesForMarkedText(ID param_1, SEL param_2) {
    auto IVar1 = NSArray::array((ID)&_OBJC_CLASS___NSArray, "array");
    IVar1 = _objc_autoreleaseReturnValue(_objc_retainAutoreleasedReturnValue(IVar1));
    return IVar1;
}

// 0x1003a3960
CGRect* OpenGLViewBacking::firstRectForCharacterRange_actualRange_(CGRect* __return_storage_ptr__, ID param_1,
                                                                   SEL param_2, _NSRange param_3, _NSRange* param_4) {
    auto result;
    _objc_msgSend_stret(&result, param_1, "frame", param_3.field_0, param_3.field_8);
    return result;
}

// 0x1003a3980
unsigned long long OpenGLViewBacking::characterIndexForPoint_(ID param_1, SEL param_2, CGPoint param_3) {
    return 0;
}

@end
