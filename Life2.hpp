#pragma once


namespace HumanCompiler{

    class State {};

    State UpdateState(State& state) {

    }

    void Human(State state, bool dead) {
        if (!dead) {
            UpdateState(state);
        }
        else {
            return;
        }
        Human(state,dead);
    }
}
