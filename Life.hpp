#pragma once 


// human as interactive objects 

namespace HumanCompiler{

    template<typename T>
    struct Collector{

    };

    struct Geometry{

    };

    struct Face
    {
        Collector<Geometry> shapes_;
    };
    

    struct PhysicalBody : public Face {
        float Height; 
    };

    struct Shape :public PhysicalBody {
        float lifetime;
    };

    class Human : public Shape{
        public:
            bool existence;

    };

}