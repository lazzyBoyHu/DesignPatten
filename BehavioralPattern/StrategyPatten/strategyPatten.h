#ifndef STRATEGYPATTEN_H_
#define STRATEGYPATTEN_H_


class AbstratStrategy
{
    public:
        virtual void Algorothmlnterface();
};

class OneStrategy : public AbstratStrategy
{
    public:
        void Algorothmlnterface();
};

class Context
{
    private:
        AbstratStrategy m_strategy;
    public:
        void SetStrategy(AbstratStrategy strategy) { m_strategy = strategy; }
        /**
         * 使用简单工厂
         * 可以根据配置来生成一个策略类
         */
        void CreateStategy();
};

#endif
