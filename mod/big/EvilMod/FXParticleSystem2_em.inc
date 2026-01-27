FXParticleSystem VergothBlinkFlareFX_2
  System
    Priority = VERY_LOW_OR_ABOVE
    ParticleName = EXFire01.tga
    Lifetime = 150 150
    SystemLifetime = 6
    SortLevel = 1
    Size = 60 60
    BurstCount = 1 1
    InitialDelay = 1 1
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color1 = R:255 G:106 B:40 0
    Color2 = R:0 G:0 B:0 150
  End
  Update = DefaultUpdate
    SizeRate = -0.25 -0.25
    SizeRateDamping = 1 1
    AngleZ = -1 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.8 0.8
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
    IsHollow = Yes
    ;Offset = X:0 Y:0 Z:2
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothBlinkFlareFX
  System
    Priority = VERY_LOW_OR_ABOVE
    ParticleName = EXFire01.tga
    Lifetime = 150 150
    SystemLifetime = 6
    Size = 10 10
    SortLevel = 1
    BurstCount = 1 1
    InitialDelay = 1 1
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color1 = R:255 G:106 B:40 0
    Color2 = R:0 G:0 B:0 150
  End
    Update = DefaultUpdate
    SizeRate = 0.25 0.25
    SizeRateDamping = 1 1
    AngleZ = -1 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.8 0.8
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
    IsHollow = Yes
    ;Offset = X:0 Y:0 Z:2
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothFireMorgothHigh1
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXexplo03.tga  ;EXfireballJ.tga  ;EXMagma01.tga
    Lifetime = 90 90
    SystemLifetime = 80
    Size = 8 15
    BurstDelay = 2 2
    BurstCount = 10 10
    IsEmitAboveGroundOnly = Yes
  End
  Color = DefaultColor
    Color1 = R:180 G:70 B:40 0
    Color2 = R:112 G:72 B:67 0 
    Color3 = R:0 G:0 B:0 90 
  End
  Alpha = DefaultAlpha
    Alpha2 = 1 1 4
    Alpha3 = 0 0 40
  End
  Update = DefaultUpdate
    SizeRate = 3 5
    SizeRateDamping = 0.6 0.8
    AngleZ = 0 7
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = -0.07
    VelocityDamping = 0.95 0.95
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -5 5
    Y = -5 5
    Z = 2 3
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:20 Y:20 Z:10
    EndPoint = X:-20 Y:-20 Z:10
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothFireMorgothRingOfFire1
  System
    Priority = ALWAYS_RENDER
    IsOneShot = Yes
    ;Shader = ALPHA
    ParticleName = EXexplo03.tga  ;EXfireballJ.tga
    Lifetime = 100 100
    SystemLifetime = 90
    Size = 15 30
    BurstCount = 6 6
    InitialDelay = 10 10
  End
  Color = DefaultColor
    Color1 = R:100 G:100 B:100 0
    Color2 = R:0 G:0 B:0 100
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.75 1 10
    Alpha3 = 0 0 30
  End
  Update = DefaultUpdate
    SizeRate = 3 3
    SizeRateDamping = 0.95 1
    AngleZ = -7 7
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = CylinderEmissionVolume
    IsHollow = Yes
    RadiusRate = 4
    Offset = X:0 Y:0 Z:10
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothFireMorgothRingOfFire2
  System
    Priority = ALWAYS_RENDER
    IsOneShot = Yes
    Shader = ALPHA
    ParticleName = EXfireballJ.tga
    Lifetime = 100 100
    SystemLifetime = 90
    Size = 25 30
    BurstCount = 6 6
    InitialDelay = 10 10
  End
  Color = DefaultColor
    Color1 = R:219 G:205 B:200 0
    Color2 = R:0 G:0 B:0 100
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.75 1 10
    Alpha3 = -0.5 0 30
  End
  Update = DefaultUpdate
    SizeRate = 3 3
    SizeRateDamping = 0.95 1
    AngleZ = -7 7
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = CylinderEmissionVolume
    IsHollow = Yes
    RadiusRate = 4
    Offset = X:0 Y:0 Z:10
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothBlinkFogFX
  System
    Priority = ALWAYS_RENDER
    Shader = W3D_EMISSIVE
    Type = DRAWABLE
    ParticleName = exlight01.w3d
    Lifetime = 50 50
    SystemLifetime = 5
    SortLevel = 1
    Size = 0.1 0.1
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:255 G:106 B:40 5
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.1 0.3 10
    Alpha3 = 0 0 50
  End
  Update = DefaultUpdate
    SizeRate = 0.02 0.02
    SizeRateDamping = 0.99 0.99
    AngleZ = -500 500
    AngularDamping = 1 1
    Rotation = ROTATE_Z
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = CylinderEmissionVolume
	Radius = 25
  End
  Draw = RenderObjectDraw
  End
End


FXParticleSystem VergothBlinkFlareFX
  System
    Priority = VERY_LOW_OR_ABOVE
    ParticleName = EXFire01.tga	;EXLnzFlar2.tga
    Lifetime = 13 13
    SystemLifetime = 12	;3
    SortLevel = 1
    BurstCount = 1 1
    InitialDelay = 3 3
    IsGroundAligned = Yes
  End
  Color = DefaultColor
   ; Color2 = R:185 G:106 B:40 
    Color2 = R:255 G:106 B:40 12
  End
  Update = DefaultUpdate
    SizeRate = 10 10
    SizeRateDamping = 0.8 0.8
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    IsHollow = Yes
    StartPoint = X:0 Y:0 Z:2 //2
    EndPoint = X:0 Y:0 Z:22 //2
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothStaff1
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXFire03.tga  ;EXSplatHaze.tga
    Lifetime = 25 25
    SortLevel = 1
    Size = 6 6
    BurstCount = 1 1
    InitialDelay = 5 5
    IsParticleUpTowardsEmitter = Yes
  End
  Color = DefaultColor
    Color2 = R:185 G:106 B:40 5
    Color3 = R:255 G:106 B:40 20
  End
  Update = DefaultUpdate
    SizeRate = -0.25 -0.25
    SizeRateDamping = 1 1
    AngleZ = -7 7
    AngularDamping = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
    Gravity = 0.01
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:25 Y:0 Z:0
    EndPoint = X:0 Y:0 Z:0
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothStaff2
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXBoltradial.tga
    Lifetime = 5 5
    SortLevel = 1
    Size = 10 10
    BurstCount = 1 1
    BurstDelay = 10 10
    InitialDelay = 5 5
    IsParticleUpTowardsEmitter = Yes
  End
  Color = DefaultColor
    Color2 = R:150 G:180 B:245 5
;    Color3 = R:200 G:200 B:180 20
  End
  Update = DefaultUpdate
    SizeRate = -0.25 -0.25
    SizeRateDamping = 1 1
    AngleZ = -7 7
    AngularDamping = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:27 Y:0 Z:0
    EndPoint = X:26 Y:0 Z:0
  End
  Draw = DefaultDraw
  End
End



FXParticleSystem VergothStaffAttack1
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXSplatHaze.tga
    Lifetime = 60 60
    SortLevel = 1
    Size = 7 12
    BurstCount = 1 1
    InitialDelay = 5 5
    IsParticleUpTowardsEmitter = Yes
  End
  Color = DefaultColor
    Color2 = R:90 G:126 B:185 5
    Color3 = R:95 G:126 B:200 20
  End
  Update = DefaultUpdate
    SizeRate = -0.25 -0.15
    SizeRateDamping = 1 1
    AngleZ = -5 7
    AngularDamping = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
    Gravity = 0.01
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:30 Y:0 Z:0
    EndPoint = X:-10 Y:0 Z:0
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothStaffAttack2
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXSplatHaze.tga
    Lifetime = 10 10
    SystemLifetime = 10
    SortLevel = 1
    Size = 5 15
    BurstCount = 10 15
    ;BurstDelay = 20 20
    InitialDelay = 10 10
    IsParticleUpTowardsEmitter = Yes
  End
  Color = DefaultColor
    Color2 = R:90 G:126 B:185 5
    Color3 = R:95 G:126 B:200 20
  End
  Update = DefaultUpdate
    SizeRate = -0.25 -0.15
    SizeRateDamping = 1 1
    AngleZ = -5 7
    AngularDamping = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
    Gravity = -0.09
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = 6 7
    Y = -3.5 3.5
    Z = -1 2
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:0 Z:15
    EndPoint = X:0 Y:0 Z:20
  End
  Draw = DefaultDraw
  End
End

;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
;Vergoth BladeMaster
;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

FXParticleSystem VergothBladeMaster
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXRing01.tga
    Lifetime = 15 15
    SortLevel = 1
    Size = 15 24
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color2 = R:30 G:35 B:91 5
    Color3 = R:0 G:0 B:0 15
    Color4 = R:32 G:32 B:32 0
  End
  Update = DefaultUpdate
    SizeRate = 1 1
    SizeRateDamping = 1 1
    AngleZ = -3 7
    AngularRateZ = -0.1 0.1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = -0.01
    VelocityDamping = 1 1
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = SphereEmissionVolume
    Radius = 10
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothBladeMasterCrystalSphere
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXSphere.tga
    Lifetime = 2 2
    ;SystemLifetime = 50
    Size = 8 14
    StartSizeRate = 3 3
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:79 G:79 B:89 0
    Color2 = R:0 G:0 B:0 3
  End
  Update = DefaultUpdate
    SizeRateDamping = 1 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    IsHollow = Yes
    StartPoint = X:0 Y:0 Z:0
    EndPoint = X:0 Y:0 Z:0
  End
  Draw = DefaultDraw
  End
End

;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
;Vergoth Smite FX
;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

FXParticleSystem VergothSmiteTail1
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXSplatHaze.tga  ;EXFire01.tga
    Lifetime = 30 30
    Size = 5 15
    BurstCount = 6 8
  End
  Color = DefaultColor
    Color1 = R:160 G:160 B:255 0
    Color2 = R:130 G:130 B:255 15
    Color3 = R:120 G:120 B:0 30
  End
  Alpha = DefaultAlpha
    Alpha1 = 1 1 1
    Alpha2 = 0.5 0.5 25
    Alpha2 = 0.01 0.01 30
  End
  Update = DefaultUpdate
    SizeRate = -0.25 -0.25
    SizeRateDamping = 1 1
    AngleZ = -4 7
    AngularDamping = 1 1
  End
  Physics = DefaultPhysics
    Gravity = -0.03
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = 4 8
    Y = -0.8 0.8
    Z = -0.8 0.8
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:10 Y:0 Z:0
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothSmiteLand1
  System
    Priority = ALWAYS_RENDER
    Shader = ALPHA
    ParticleName = EXFireScroll3.tga  ;EXFire01.tga
    Lifetime = 25 35
    SystemLifetime = 8
    Size = 1 3
    BurstCount = 20 30
  End
  Color = DefaultColor
    Color1 = R:130 G:130 B:255 0
    Color2 = R:170 G:170 B:255 25
    Color2 = R:0 G:0 B:0 35
  End
  Alpha = DefaultAlpha
    Alpha1 = 1.0 1.0 0
    Alpha2 = 0.30 0.30 20
    Alpha3 = 0.0 0.0 35
  End
  Update = DefaultUpdate
    SizeRateDamping = 1 1
    AngleZ = -7 5
    AngularRateZ = -0.5 0.5
    AngularDamping = 1 1
    Rotation = ROTATE_Y
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = -0.3
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -3 3
    Y = -3 3
    Z = 2 3
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:0 Z:3
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothSmiteLand2
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXRing01.tga
    Lifetime = 20 20
    SystemLifetime = 3
    SortLevel = 1
    Size = 1 1
    BurstCount = 1 1
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color1 = R:166 G:172 B:255 0
    Color2 = R:0 G:0 B:0 40
    ColorScale = -40 40
  End
  Update = DefaultUpdate
    SizeRate = 5 5
    SizeRateDamping = 1 1
    AngleZ = -1 3
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.8 0.8
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
    IsHollow = Yes
  End
  Draw = DefaultDraw
  End
End

;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
;WOP FX
;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

FXParticleSystem VergothBlastInitialCenter
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXLnzFlar1.tga
    Lifetime = 70 70
    SystemLifetime = 30
    SortLevel = 1
    Size = 5 5
    BurstDelay = 5 5
    BurstCount = 1 1
    InitialDelay = 20 20
  End
  Color = DefaultColor
    Color2 = R:136 G:172 B:255 20
    Color3 = R:0 G:0 B:0 70
  End
  Update = DefaultUpdate
    SizeRate = 1.5 1.5
    SizeRateDamping = 1.03 1.03
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.75 0.8
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:18 Y:0 Z:10
    EndPoint = X:18 Y:0 Z:10
  End
  Draw = DefaultDraw
  End
End

;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
;Fire Of Morgoth FXs
;FX For Vergoth Bone Attachments
;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

FXParticleSystem VergothFireMorgoth1
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXFire03.tga  ;EXSplatHaze.tga
    Lifetime = 80 80
    SystemLifetime = 80
    SortLevel = 1
    Size = 5 20
    BurstCount = 2 2
    InitialDelay = 50 50
    IsParticleUpTowardsEmitter = Yes
  End
  Color = DefaultColor
    Color2 = R:215 G:106 B:40 5
    Color3 = R:255 G:106 B:40 20
  End
  Update = DefaultUpdate
    SizeRate = 0.35 0.35
    SizeRateDamping = 1 1
    AngleZ = -7 7
    AngularDamping = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
    Gravity = -0.09
  End
  EmissionVelocity = OrthoEmissionVelocity
    X =  1.2 2 
    Y = -2 2
    Z = -2 2
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:25 Y:0 Z:0
    EndPoint = X:20 Y:0 Z:0
  End
  Draw = DefaultDraw
  End
End

;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
;Fire Of Morgoth FXs
;FX For FXList
;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

FXParticleSystem VergothFireMorgothHigh1
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXexplo03.tga  ;EXfireballJ.tga  ;EXMagma01.tga
    Lifetime = 80 80
    SystemLifetime = 80
    Size = 8 15
    BurstDelay = 2 2
    BurstCount = 10 10
    IsEmitAboveGroundOnly = Yes
  End
  Color = DefaultColor
    Color1 = R:180 G:70 B:40 8
    Color2 = R:112 G:72 B:67 50
    Color3 = R:0 G:0 B:0 80
  End
  Alpha = DefaultAlpha
    Alpha2 = 1 1 4
    Alpha3 = 0 0 40
  End
  Update = DefaultUpdate
    SizeRate = 3 5
    SizeRateDamping = 0.6 0.8
    AngleZ = 0 7
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = -0.07
    VelocityDamping = 0.95 0.95
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -5 5
    Y = -5 5
    Z = 2 3
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:20 Y:20 Z:10
    EndPoint = X:-20 Y:-20 Z:10
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothFireMorgothRingOfFire1
  System
    Priority = ALWAYS_RENDER
    IsOneShot = Yes
    ;Shader = ALPHA
    ParticleName = EXexplo03.tga  ;EXfireballJ.tga
    Lifetime = 60 60
    SystemLifetime = 40
    Size = 15 30
    BurstCount = 6 6
    InitialDelay = 10 10
  End
  Color = DefaultColor
    Color1 = R:119 G:119 B:119 0
    Color2 = R:100 G:100 B:100 10
    Color3 = R:0 G:0 B:0 50
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.75 1 10
    Alpha3 = 0 0 30
  End
  Update = DefaultUpdate
    SizeRate = 3 3
    SizeRateDamping = 0.95 1
    AngleZ = -7 7
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = CylinderEmissionVolume
    IsHollow = Yes
    RadiusRate = 4
    Offset = X:0 Y:0 Z:10
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothFireMorgothRingOfFire2
  System
    Priority = ALWAYS_RENDER
    IsOneShot = Yes
    Shader = ALPHA
    ParticleName = EXfireballJ.tga
    Lifetime = 60 60
    SystemLifetime = 40
    Size = 25 30
    BurstCount = 6 6
    InitialDelay = 10 10
  End
  Color = DefaultColor
    Color1 = R:219 G:219 B:219 0
    Color2 = R:219 G:205 B:200 10
    Color3 = R:0 G:0 B:0 50
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.75 1 10
    Alpha3 = -0.5 0 30
  End
  Update = DefaultUpdate
    SizeRate = 3 3
    SizeRateDamping = 0.95 1
    AngleZ = -7 7
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = CylinderEmissionVolume
    IsHollow = Yes
    RadiusRate = 4
    Offset = X:0 Y:0 Z:10
  End
  Draw = DefaultDraw
  End
End

;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
;Thunder Of Vergoth FX
;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

FXParticleSystem VergothLightningHitShockwave
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXShockWav.tga
    Lifetime = 20 20
    SystemLifetime = 6
    SortLevel = 1
    Size = 5 5
    StartSizeRate = 1 4
    BurstCount = 4 5
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color1 = R:52 G:98 B:254 0
    Color2 = R:0 G:0 B:0 6
  End
  Alpha = DefaultAlpha
  End
  Update = DefaultUpdate
    SizeRate = 65 65
    SizeRateDamping = 0.5 0.5
    AngleZ = -1 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0 8.07921e+33
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothLightningHitArc
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXBoltRadial.tga
    Lifetime = 20 20
    SystemLifetime = 6
    SortLevel = 1
    Size = 5 5
    StartSizeRate = 1 4
    BurstCount = 3 4
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color1 = R:52 G:98 B:254 0
    Color2 = R:0 G:0 B:0 6
  End
  Alpha = DefaultAlpha
  End
  Update = DefaultUpdate
    SizeRate = 65 65
    SizeRateDamping = 0.5 0.5
    AngleZ = -1 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0 8.07921e+33
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 1
    Length = 20
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothLightningFlash1
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXLnzFlar1.tga
    Lifetime = 15 15
    SystemLifetime = 6
    SortLevel = 1
    Size = 15 15
    ;BurstDelay = 5 5
    BurstCount = 1 1
    ;InitialDelay = 20 20
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color1 = R:52 G:98 B:254 0
    Color3 = R:0 G:0 B:0 70
  End
  Update = DefaultUpdate
    SizeRate = 40 40
    SizeRateDamping = 1.03 1.03
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.75 0.8
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:0 Z:10
    EndPoint = X:0 Y:0 Z:10
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothLightningFlash2
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXLnzFlar1.tga
    Lifetime = 15 15
    SystemLifetime = 6
    SortLevel = 1
    Size = 15 15
    ;BurstDelay = 5 5
    BurstCount = 1 1
    ;InitialDelay = 20 20
    ;IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color1 = R:52 G:98 B:254 0
    Color3 = R:0 G:0 B:0 70
  End
  Update = DefaultUpdate
    SizeRate = 40 40
    SizeRateDamping = 1.03 1.03
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.75 0.8
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:0 Z:10
    EndPoint = X:0 Y:0 Z:10
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothLightningHit01
  System
    Priority = ALWAYS_RENDER
    Type = STREAK
    ParticleName = EXsarumanbolt2.tga
    Lifetime = 15 20
    SystemLifetime = 1
    SortLevel = 1
    Size = 15 50
    BurstCount = 10 10
    ;BurstDelay = 1 1
  End
  Color = DefaultColor
    Color1 = R:255 G:255 B:255 0
    Color2 = R:31 G:71 B:133 5
    Color3 = R:0 G:0 B:0 20
    ColorScale = -2 -2
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.9 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.9 0.9
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.5 0.5
  End
  EmissionVolume = LightningEmission
    StartPoint = X:-80 Y:0 Z:350
    Amplitude1 = -200 200
    Frequency1 = -4 6
    Phase1 = -4 5
    Amplitude2 = -10 50
    Frequency2 = 0 4
    Amplitude3 = -10 50
    Frequency3 = 0 4
    Phase3 = 0 5
  End
  Draw = LightningDraw
    OffsetX = -5 5
    OffsetY = -5 5
    OffsetZ = -1 1
  End
End

FXParticleSystem VergothLightningHit02
  System
    Priority = ALWAYS_RENDER
    Type = STREAK
    ParticleName = EXsarumanbolt2.tga
    Lifetime = 10 20
    SystemLifetime = 1
    SortLevel = 1
    Size = 15 50
    BurstCount = 10 10
    InitialDelay = 40 40
  End
  Color = DefaultColor
    Color1 = R:255 G:255 B:255 0
    Color2 = R:31 G:71 B:133 5
    Color3 = R:0 G:0 B:0 20
    ColorScale = -2 -2
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.9 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.9 0.9
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.5 0.5
  End
  EmissionVolume = LightningEmission
    StartPoint = X:80 Y:0 Z:300
    Amplitude1 = -200 200
    Frequency1 = -4 6
    Phase1 = -4 5
    Amplitude2 = -10 50
    Frequency2 = 0 4
    Amplitude3 = -10 50
    Frequency3 = 0 4
    Phase3 = 0 5
  End
  Draw = LightningDraw
    OffsetX = -5 5
    OffsetY = -5 5
    OffsetZ = -1 1
  End
End

FXParticleSystem VergothLightningHit03
  System
    Priority = ALWAYS_RENDER
    Type = STREAK
    ParticleName = EXsarumanbolt2.tga
    Lifetime = 10 20
    SystemLifetime = 1
    SortLevel = 1
    Size = 15 50
    BurstCount = 10 10
  End
  Color = DefaultColor
    Color1 = R:255 G:255 B:255 0
    Color2 = R:31 G:71 B:133 5
    Color3 = R:0 G:0 B:0 20
    ColorScale = -2 -2
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.9 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.9 0.9
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.5 0.5
  End
  EmissionVolume = LightningEmission
    StartPoint = X:80 Y:0 Z:300
    Amplitude1 = -200 200
    Frequency1 = -4 6
    Phase1 = -4 5
    Amplitude2 = -10 50
    Frequency2 = 0 4
    Amplitude3 = -10 50
    Frequency3 = 0 4
    Phase3 = 0 5
  End
  Draw = LightningDraw
    OffsetX = -5 5
    OffsetY = -5 5
    OffsetZ = -1 1
  End
End

FXParticleSystem VergothLightningHit04
  System
    Priority = ALWAYS_RENDER
    Type = STREAK
    ParticleName = EXsarumanbolt2.tga
    Lifetime = 15 20
    SystemLifetime = 1
    SortLevel = 1
    Size = 15 50
    BurstCount = 10 10
  End
  Color = DefaultColor
    Color1 = R:255 G:255 B:255 0
    Color2 = R:31 G:71 B:133 5
    Color3 = R:0 G:0 B:0 20
    ColorScale = -2 -2
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.9 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.9 0.9
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.5 0.5
  End
  EmissionVolume = LightningEmission
    StartPoint = X:-20 Y:60 Z:300
    Amplitude1 = -200 200
    Frequency1 = -4 6
    Phase1 = -4 5
    Amplitude2 = -10 50
    Frequency2 = 0 4
    Amplitude3 = -10 50
    Frequency3 = 0 4
    Phase3 = 0 5
  End
  Draw = LightningDraw
    OffsetX = -5 5
    OffsetY = -5 5
    OffsetZ = -1 1
  End
End

FXParticleSystem VergothLightningHit05
  System
    Priority = ALWAYS_RENDER
    Type = STREAK
    ParticleName = EXsarumanbolt2.tga
    Lifetime = 10 20
    SystemLifetime = 1
    SortLevel = 1
    Size = 15 50
    BurstCount = 10 10
  End
  Color = DefaultColor
    Color1 = R:255 G:255 B:255 0
    Color2 = R:31 G:71 B:133 5
    Color3 = R:0 G:0 B:0 20
    ColorScale = -2 -2
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.9 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.9 0.9
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.5 0.5
  End
  EmissionVolume = LightningEmission
    StartPoint = X:30 Y:-20 Z:300
    Amplitude1 = -200 200
    Frequency1 = -4 6
    Phase1 = -4 5
    Amplitude2 = -10 50
    Frequency2 = 0 4
    Amplitude3 = -10 50
    Frequency3 = 0 4
    Phase3 = 0 5
  End
  Draw = LightningDraw
    OffsetX = -5 5
    OffsetY = -5 5
    OffsetZ = -1 1
  End
End

FXParticleSystem VergothLightningHit06
  System
    Priority = ALWAYS_RENDER
    Type = STREAK
    ParticleName = EXsarumanbolt2.tga
    Lifetime = 50 50
    SystemLifetime = 1
    SortLevel = 1
    Size = 15 50
    BurstCount = 10 10
  End
  Color = DefaultColor
    Color1 = R:255 G:255 B:255 0
    Color2 = R:31 G:71 B:133 5
    Color3 = R:0 G:0 B:0 20
    ColorScale = -2 -2
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.9 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.9 0.9
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.5 0.5
  End
  EmissionVolume = LightningEmission
    StartPoint = X:0 Y:0 Z:300
    Amplitude1 = -200 200
    Frequency1 = -4 6
    Phase1 = -4 5
    Amplitude2 = -10 50
    Frequency2 = 0 4
    Amplitude3 = -10 50
    Frequency3 = 0 4
    Phase3 = 0 5
  End
  Draw = LightningDraw
    OffsetX = -5 5
    OffsetY = -5 5
    OffsetZ = -1 1
  End
End

;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

FXParticleSystem VergothLightningStart01
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXBarbStreaks.tga   ;EXRing01.tga
    Lifetime = 165 165
    SortLevel = 1
    Size = 15 25
    BurstCount = 2 2
    SystemLifetime = 50
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color2 = R:31 G:71 B:133 5
    Color3 = R:31 G:71 B:133 15
    Color4 = R:32 G:32 B:32 45
  End
  Update = DefaultUpdate
    SizeRate = -0.1 -0.1
    SizeRateDamping = 1 1
    AngleZ = -2 4
    AngularRateZ = -0.1 0.1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = 0.2
    VelocityDamping = 1 1
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = SphereEmissionVolume
    Radius = 10
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem VergothLightningStart02
  System
    Priority = ALWAYS_RENDER
    Shader = W3D_EMISSIVE
    Type = DRAWABLE
    ParticleName = exlight01.w3d
    Lifetime = 150 150
    SystemLifetime = 5
    SortLevel = 1
    Size = 0.2 0.2
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:11 G:41 B:103 0
    ;Color2 = R:31 G:71 B:153 20
    ;Color1 = R:133 G:133 B:133 90
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.1 0.1 10
    Alpha3 = 0 0 120
  End
  Update = DefaultUpdate
    SizeRate = 0.1 0.1
    SizeRateDamping = 0.99 0.99
    AngleZ = -500 500
    AngularDamping = 1 1
    Rotation = ROTATE_Z
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 13
  End
  Draw = RenderObjectDraw
  End
End 