//MARVERTI DIEGO 4AI

#ifndef CLASSECERCHIO_H
#define CLASSECERCHIO_H

class Cerchio {
    private:
        float circonferenza, raggio, diametro, area;
    public:
        Cerchio();
        Cerchio(float cir, float r, float d);
        ~Cerchio();
        void setCirconferenza(float cir);
        void setRaggio(float r);
        void setDiametro(float d);
        void setArea(float a);
        float getCirconferenza();
        float getRaggio();
        float getDiametro();
        float getArea();
        void readCerchio();
        void printCerchio();
        float calcArea();
        float calcCirconferenza();
        void duobleRCerchio(const Cerchio& newC);
};

#endif