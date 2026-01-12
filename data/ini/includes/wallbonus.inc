  	Behavior = AttributeModifierAuraUpdate ModuleTag_WallBonus
		StartsActive		= Yes	; If no, requires upgrade to turn on.
		BonusName		= DefaultWallBonus
		RefreshDelay		= 2000
		ObjectFilter		= ANY +INFANTRY +CAVALRY -MACHINE -IMMOBILE -STRUCTURE -BASE_FOUNDATION -MordorRamCrew -IsengardRamCrew 
	End