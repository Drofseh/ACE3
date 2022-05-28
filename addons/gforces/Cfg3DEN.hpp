#define DEFAULT_IS_PILOT (_this getVariable [ARR_2('ACE_IsPilot',false)])

class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class ace_attributes {
                class Attributes {
                    class ace_isPilot {
                        displayName = CSTRING(IsPilot_DisplayName);
                        tooltip = CSTRING(IsPilot_Description);
                        property = QUOTE(ace_IsPilot);
                        control = "Checkbox";
                        expression = QUOTE(_this setVariable [ARR_3('ACE_IsPilot',_value,true)]; if (_value) then {_this setVariable [ARR_3('ACE_GForceCoef',0.55,true)]} else {_this setVariable [ARR_3('ACE_GForceCoef',getNumber ((configOf _this) >> 'ACE_GForceCoef'),true)]});
                        defaultValue = QUOTE(DEFAULT_IS_PILOT);
                        condition = "objectBrain";
                        typeName = "BOOL";
                    };
                };
            };
        };
    };
};
