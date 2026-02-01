✅❌

# Balance

## Units level up

`NextLevel.RequiredExperience` = `PreviousLevel.RequiredExperience` + `CurrentLevel.ExperienceAward` * (`CurrentLevel` + `HordeCount`)

# TODO
    ◯ Множественный эффект лидерства
    ◯ Автохил у всех

# Goblins

# TODO
- GoblinFighter
  - Horde
    - ✅ 5 horde members
    - ✅ command points
    - ✅ build cost & time
    - ❌ large group horde bonus
    - ✅ level up to 10 lvl
    - ❌ thread level
    - ❌ speed
    - ❌ ? health regen ?
    - ❌ vision range
    - ❌ AI combat members
    - ❌ AI Upgrades
    - ✅ if archer then KindOf -> delete PATH_THROUGH
  - Object
    - ✅ command points
    - ✅ display damage
    - ❌ thread level
    - ✅ health
    - ❌ ? health regen ?
    - ❌ speed
    - ✅ damage
    - ✅ damage upgrade
    - ✅ armor
    - ✅ armor upgrade
    - ❌ if archer then KindOf -> delete PATH_THROUGH

## Особенности

Основное направление геймплея должны быть постоянные набеги. Герои обладают большим range лидерства, которое дает эффект мародерства 50%
В Rush стадии с помощью героев войска получают эффект мародерства 50%
В 

## Horders

# Game mechanics

## Pillage
◯ Крадет деньги у противника при уроне по фильтру
```
Behavior = PillageModule ModuleTag_Test1
		PillageAmount				= WILDMAN_PILLAGE_AMOUNT
		NumDamageEventsPerPillage	= WILDMAN_PILLAGE_NUM_DAMAGES
		PillageFilter				= WILDMAN_PILLAGE_FILTER
	End
```

## Steal Money
◯ Крадет деньги у противника при уроне по фильтру
```
StealMoneyNugget
        AmountStolenPerAttack    = CREATE_A_HERO_STEAL_MONEY_AMOUNT_L1
        SpecialObjectFilter        = CREATE_A_HERO_STEAL_MONEY_OBJECT_FILTER
        RequiredUpgradeNames    = Upgrade_CreateAHeroStealMoney_Level1
        ForbiddenUpgradeNames    = Upgrade_CreateAHeroStealMoney_Level2 Upgrade_CreateAHeroStealMoney_Level3
    End
```